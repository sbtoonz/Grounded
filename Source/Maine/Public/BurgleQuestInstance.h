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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Objectives, meta=(AllowPrivateAccess=true))
    TArray<UBaseObjective*> Objectives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bPerformedComplete: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBurgleQuestTemplate> Template;
    
public:
    UBurgleQuestInstance();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RemoveObjectiveMarkers() const;
    
    UFUNCTION(BlueprintCallable)
    void PerformComplete();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_Objectives();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyQuestStart();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyQuestComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyAbandonQuest();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitializeStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPerformedComplete() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FString GetTitle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBurgleQuestTemplate* GetTemplate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    int32 GetScienceReward() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FString GetObjectiveText(int32 ObjectiveIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBurgleObjectiveSimple* GetObjectiveAsSimple(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBurgleObjectiveProgress* GetObjectiveAsProgress(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBaseBurgleObjective* GetObjective(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetGenerationFailed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    int32 GetExternalScienceReward() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FString GetDescriptionText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBaseBurgleObjective* GetCurrentObjective() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GenerateParameters();
    
    UFUNCTION(BlueprintCallable)
    void FailGeneration();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateObjectiveMarkers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CleanUpQuest();
    
    UFUNCTION(BlueprintCallable)
    void AddObjective(UBaseBurgleObjective* Objective);
    
    
    // Fix for true pure virtual functions not being implemented
};

