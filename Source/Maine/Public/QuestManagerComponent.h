#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PersistentInterface.h"
#include "OnQuestChangedDelegateDelegate.h"
#include "OnObjectiveCompletedDelegateDelegate.h"
#include "OnObjectiveActivatedDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "QuestManagerComponent.generated.h"

class ASurvivalPlayerState;
class UQuest;
class AActor;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UQuestManagerComponent : public UActorComponent, public IPersistentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnQuestChangedDelegate OnQuestStarted;
    
    UPROPERTY(BlueprintAssignable)
    FOnQuestChangedDelegate OnQuestComplete;
    
    UPROPERTY(BlueprintAssignable)
    FOnQuestChangedDelegate OnQuestReplicationUpdated;
    
    UPROPERTY(BlueprintAssignable)
    FOnObjectiveActivatedDelegate OnObjectiveActivated;
    
    UPROPERTY(BlueprintAssignable)
    FOnObjectiveCompletedDelegate OnObjectiveComplete;
    
private:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_PartyQuests)
    TArray<UQuest*> PartyQuests;
    
    UPROPERTY(Transient)
    TArray<UQuest*> DummyClientQuestList;
    
public:
    UQuestManagerComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void StartQuest(FDataTableRowHandle QuestRowHandle, ASurvivalPlayerState* PlayerState, AActor* Instigator);
    
    UFUNCTION(BlueprintCallable)
    void ResetQuest(FDataTableRowHandle QuestRowHandle);
    
    UFUNCTION()
    void OnRep_PartyQuests();
    
    UFUNCTION()
    void OnGlobalVariableChangedEvent(const FGuid& GlobalVariableID, int32 VariableValue, AActor* Instigator);
    
    UFUNCTION(NetMulticast, Unreliable)
    void MulticastStartQuest(FDataTableRowHandle QuestRowHandle, ASurvivalPlayerState* PlayerState);
    
    UFUNCTION(NetMulticast, Unreliable)
    void MulticastCompleteQuest(FDataTableRowHandle QuestRowHandle, ASurvivalPlayerState* PlayerState);
    
    UFUNCTION(NetMulticast, Unreliable)
    void MulticastCompleteObjective(FDataTableRowHandle QuestRowHandle, int32 QuestIndex, ASurvivalPlayerState* PlayerState);
    
    UFUNCTION(NetMulticast, Unreliable)
    void MulticastActivateObjective(FDataTableRowHandle QuestRowHandle, int32 QuestIndex, ASurvivalPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    bool IsQuestStarted(FDataTableRowHandle QuestRowHandle, ASurvivalPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    bool IsQuestCompleted(FDataTableRowHandle QuestRowHandle, ASurvivalPlayerState* PlayerState);
    
    UFUNCTION(BlueprintPure)
    TArray<UQuest*> GetQuests();
    
    UFUNCTION(BlueprintPure)
    TArray<UQuest*> GetPartyQuests();
    
    UFUNCTION(BlueprintPure)
    TArray<UQuest*> GetClientQuests(ASurvivalPlayerState* PlayerState);
    
    UFUNCTION(BlueprintPure)
    TArray<UQuest*> GetActiveTutorialQuests();
    
    UFUNCTION(BlueprintCallable)
    void CompleteQuest(FDataTableRowHandle QuestRowHandle, ASurvivalPlayerState* PlayerState, AActor* Instigator);
    
    UFUNCTION(BlueprintCallable)
    void CompleteObjective(FDataTableRowHandle QuestRowHandle, int32 QuestIndex, ASurvivalPlayerState* PlayerState, AActor* Instigator);
    
    UFUNCTION(BlueprintPure)
    bool AreAllObjectivesActiveAndComplete(FDataTableRowHandle QuestRowHandle, ASurvivalPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    void ActivateObjective(FDataTableRowHandle QuestRowHandle, int32 QuestIndex, ASurvivalPlayerState* PlayerState, AActor* Instigator);
    
    
    // Fix for true pure virtual functions not being implemented
};

