#pragma once
#include "CoreMinimal.h"
#include "OnQuestChangedDelegateDelegate.h"
#include "Components/ActorComponent.h"
#include "PersistentInterface.h"
#include "Engine/DataTable.h"
#include "OnObjectiveCompletedDelegateDelegate.h"
#include "OnObjectiveActivatedDelegateDelegate.h"
#include "UObject/NoExportTypes.h"
#include "QuestManagerComponent.generated.h"

class UQuest;
class ASurvivalPlayerState;
class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UQuestManagerComponent : public UActorComponent, public IPersistentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnQuestChangedDelegate OnQuestStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnQuestChangedDelegate OnQuestComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnQuestChangedDelegate OnQuestReplicationUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnObjectiveActivatedDelegate OnObjectiveActivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnObjectiveCompletedDelegate OnObjectiveComplete;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PartyQuests, meta=(AllowPrivateAccess=true))
    TArray<UQuest*> PartyQuests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UQuest*> DummyClientQuestList;
    
public:
    UQuestManagerComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void StartQuest(FDataTableRowHandle QuestRowHandle, ASurvivalPlayerState* PlayerState, AActor* Instigator);
    
    UFUNCTION(BlueprintCallable)
    void ResetQuest(FDataTableRowHandle QuestRowHandle);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PartyQuests();
    
    UFUNCTION(BlueprintCallable)
    void OnGlobalVariableChangedEvent(const FGuid& GlobalVariableID, int32 VariableValue, AActor* Instigator);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastStartQuest(FDataTableRowHandle QuestRowHandle, ASurvivalPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastCompleteQuest(FDataTableRowHandle QuestRowHandle, ASurvivalPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastCompleteObjective(FDataTableRowHandle QuestRowHandle, int32 QuestIndex, ASurvivalPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastActivateObjective(FDataTableRowHandle QuestRowHandle, int32 QuestIndex, ASurvivalPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    bool IsQuestStarted(FDataTableRowHandle QuestRowHandle, ASurvivalPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    bool IsQuestCompleted(FDataTableRowHandle QuestRowHandle, ASurvivalPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UQuest*> GetQuests();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UQuest*> GetPartyQuests();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UQuest*> GetClientQuests(ASurvivalPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UQuest*> GetActiveTutorialQuests();
    
    UFUNCTION(BlueprintCallable)
    void CompleteQuest(FDataTableRowHandle QuestRowHandle, ASurvivalPlayerState* PlayerState, AActor* Instigator);
    
    UFUNCTION(BlueprintCallable)
    void CompleteObjective(FDataTableRowHandle QuestRowHandle, int32 QuestIndex, ASurvivalPlayerState* PlayerState, AActor* Instigator);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreAllObjectivesActiveAndComplete(FDataTableRowHandle QuestRowHandle, ASurvivalPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    void ActivateObjective(FDataTableRowHandle QuestRowHandle, int32 QuestIndex, ASurvivalPlayerState* PlayerState, AActor* Instigator);
    
    
    // Fix for true pure virtual functions not being implemented
};

