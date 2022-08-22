#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OnBurgleObjectiveUpdatedDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PersistentInterface.h"
#include "OnBurgleQuestStartedDelegateDelegate.h"
#include "OnBurgleQuestCompleteDelegateDelegate.h"
#include "OnBurgleObjectiveCompletedDelegateDelegate.h"
#include "BurgleQuestManagerDelegateDelegate.h"
#include "BurgleQuestManagerComponent.generated.h"

class UBaseObjective;
class UBurgleQuestInstance;
class ASurvivalPlayerController;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UBurgleQuestManagerComponent : public UActorComponent, public IPersistentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnBurgleQuestStartedDelegate OnQuestStarted;
    
    UPROPERTY(BlueprintAssignable)
    FOnBurgleQuestCompleteDelegate OnQuestComplete;
    
    UPROPERTY(BlueprintAssignable)
    FOnBurgleObjectiveUpdatedDelegate OnObjectiveUpdated;
    
    UPROPERTY(BlueprintAssignable)
    FOnBurgleObjectiveCompletedDelegate OnObjectiveComplete;
    
    UPROPERTY(BlueprintAssignable)
    FBurgleQuestManagerDelegate OnActiveQuestsChanged;
    
    UPROPERTY(BlueprintAssignable)
    FBurgleQuestManagerDelegate OnAvailableQuestsChanged;
    
    UPROPERTY(BlueprintAssignable)
    FBurgleQuestManagerDelegate OnQuestsRefilled;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    int32 MaxSimultaneousQuests;
    
    UPROPERTY(EditDefaultsOnly)
    float CompletedQuestProgressWeight;
    
    UPROPERTY(EditDefaultsOnly)
    float DayProgressWeight;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_AvailableQuests)
    TArray<UBurgleQuestInstance*> AvailableQuests;
    
    UPROPERTY(Replicated)
    int32 LastDayGenerated;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ActiveQuests)
    TArray<UBurgleQuestInstance*> ActiveQuests;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TSubclassOf<UBurgleQuestInstance>> QuestTypes;
    
public:
    UBurgleQuestManagerComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    bool TryRequestRefillQuests(ASurvivalPlayerController* Instigator);
    
    UFUNCTION(BlueprintCallable)
    void RejectQuest(UBurgleQuestInstance* Quest);
    
protected:
    UFUNCTION()
    void OnRep_AvailableQuests();
    
    UFUNCTION()
    void OnRep_ActiveQuests();
    
    UFUNCTION(NetMulticast, Unreliable)
    void MulticastStartQuest(UBurgleQuestInstance* Quest);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastQuestsRefilled();
    
public:
    UFUNCTION(NetMulticast, Unreliable)
    void MulticastObjectiveUpdated(UBurgleQuestInstance* Quest, UBaseObjective* Objective);
    
protected:
    UFUNCTION(NetMulticast, Unreliable)
    void MulticastCompleteQuest(UBurgleQuestInstance* Quest);
    
public:
    UFUNCTION(BlueprintPure)
    float GetProgressRating() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCompletedQuestCount() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UBurgleQuestInstance*> GetAvailableQuests() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetAvailableQuestCount() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UBurgleQuestInstance*> GetAllQuests() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UBurgleQuestInstance*> GetActiveQuests() const;
    
    UFUNCTION()
    void ForceRegenerateQuests();
    
    UFUNCTION()
    void DebugSetCompletedQuestCount(int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void AcceptQuest(UBurgleQuestInstance* Quest);
    
    UFUNCTION(BlueprintCallable)
    void AbandonQuest(UBurgleQuestInstance* Quest);
    
    
    // Fix for true pure virtual functions not being implemented
};

