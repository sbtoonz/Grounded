#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BaseQuest.h"
#include "PersistentInterface.h"
#include "BurgleQuestInstance.generated.h"

class UBaseBurgleObjective;
class UBaseObjective;
class UBurgleQuestTemplate;
class UBurgleObjectiveSimple;
class UBurgleObjectiveProgress;

UCLASS(Blueprintable)
class MAINE_API UBurgleQuestInstance : public UBaseQuest, public IPersistentInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_Objectives)
    TArray<UBaseObjective*> Objectives;
    
    UPROPERTY(Replicated, Transient)
    uint8 bPerformedComplete: 1;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UBurgleQuestTemplate> Template;
    
public:
    UBurgleQuestInstance();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION()
    void SetComplete();
    
    UFUNCTION(BlueprintImplementableEvent)
    void RemoveObjectiveMarkers() const;
    
    UFUNCTION(BlueprintCallable)
    void PerformComplete();
    
private:
    UFUNCTION()
    void OnRep_Objectives();
    
public:
    UFUNCTION(BlueprintNativeEvent)
    void NotifyQuestStart();
    
    UFUNCTION(BlueprintNativeEvent)
    void NotifyQuestComplete();
    
    UFUNCTION(BlueprintNativeEvent)
    void NotifyAbandonQuest();
    
    UFUNCTION(BlueprintNativeEvent)
    void InitializeStarted();
    
    UFUNCTION(BlueprintPure)
    bool HasPerformedComplete() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    FString GetTitle() const;
    
    UFUNCTION(BlueprintPure)
    UBurgleQuestTemplate* GetTemplate() const;
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    int32 GetScienceReward() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    FString GetObjectiveText(int32 ObjectiveIndex) const;
    
    UFUNCTION(BlueprintPure)
    UBurgleObjectiveSimple* GetObjectiveAsSimple(int32 Index) const;
    
    UFUNCTION(BlueprintPure)
    UBurgleObjectiveProgress* GetObjectiveAsProgress(int32 Index) const;
    
    UFUNCTION(BlueprintPure)
    UBaseBurgleObjective* GetObjective(int32 Index) const;
    
    UFUNCTION(BlueprintPure)
    bool GetGenerationFailed() const;
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    int32 GetExternalScienceReward() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    FString GetDescriptionText() const;
    
    UFUNCTION(BlueprintPure)
    UBaseBurgleObjective* GetCurrentObjective() const;
    
    UFUNCTION(BlueprintNativeEvent)
    void GenerateParameters();
    
    UFUNCTION(BlueprintCallable)
    void FailGeneration();
    
    UFUNCTION(BlueprintImplementableEvent)
    void CreateObjectiveMarkers() const;
    
    UFUNCTION(BlueprintNativeEvent)
    void CleanUpQuest();
    
    UFUNCTION(BlueprintCallable)
    void AddObjective(UBaseBurgleObjective* Objective);
    
    
    // Fix for true pure virtual functions not being implemented
};

