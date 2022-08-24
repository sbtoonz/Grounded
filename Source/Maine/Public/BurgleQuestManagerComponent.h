#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "OnBurgleQuestStartedDelegateDelegate.h"
#include "PersistentInterface.h"
#include "OnBurgleQuestCompleteDelegateDelegate.h"
#include "OnBurgleObjectiveUpdatedDelegateDelegate.h"
#include "OnBurgleObjectiveCompletedDelegateDelegate.h"
#include "BurgleQuestManagerDelegateDelegate.h"
#include "BurgleQuestManagerComponent.generated.h"

class UBaseObjective;
class UBurgleQuestInstance;
class ASurvivalPlayerController;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UBurgleQuestManagerComponent : public UActorComponent, public IPersistentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBurgleQuestStartedDelegate OnQuestStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBurgleQuestCompleteDelegate OnQuestComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBurgleObjectiveUpdatedDelegate OnObjectiveUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBurgleObjectiveCompletedDelegate OnObjectiveComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBurgleQuestManagerDelegate OnActiveQuestsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBurgleQuestManagerDelegate OnAvailableQuestsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBurgleQuestManagerDelegate OnQuestsRefilled;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSimultaneousQuests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CompletedQuestProgressWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DayProgressWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_AvailableQuests, meta=(AllowPrivateAccess=true))
    TArray<UBurgleQuestInstance*> AvailableQuests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 LastDayGenerated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ActiveQuests, meta=(AllowPrivateAccess=true))
    TArray<UBurgleQuestInstance*> ActiveQuests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UBurgleQuestInstance>> QuestTypes;
    
public:
    UBurgleQuestManagerComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    bool TryRequestRefillQuests(ASurvivalPlayerController* Instigator);
    
    UFUNCTION(BlueprintCallable)
    void RejectQuest(UBurgleQuestInstance* Quest);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_AvailableQuests();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ActiveQuests();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastStartQuest(UBurgleQuestInstance* Quest);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastQuestsRefilled();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastObjectiveUpdated(UBurgleQuestInstance* Quest, UBaseObjective* Objective);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastCompleteQuest(UBurgleQuestInstance* Quest);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetProgressRating() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCompletedQuestCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UBurgleQuestInstance*> GetAvailableQuests() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAvailableQuestCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UBurgleQuestInstance*> GetAllQuests() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UBurgleQuestInstance*> GetActiveQuests() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceRegenerateQuests();
    
    UFUNCTION(BlueprintCallable)
    void DebugSetCompletedQuestCount(int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void AcceptQuest(UBurgleQuestInstance* Quest);
    
    UFUNCTION(BlueprintCallable)
    void AbandonQuest(UBurgleQuestInstance* Quest);
    
    
    // Fix for true pure virtual functions not being implemented
};

