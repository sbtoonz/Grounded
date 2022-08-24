#include "QuestManagerComponent.h"
#include "Net/UnrealNetwork.h"

class UQuest;
class ASurvivalPlayerState;
class AActor;

void UQuestManagerComponent::StartQuest(FDataTableRowHandle QuestRowHandle, ASurvivalPlayerState* PlayerState, AActor* Instigator) {
}

void UQuestManagerComponent::ResetQuest(FDataTableRowHandle QuestRowHandle) {
}

void UQuestManagerComponent::OnRep_PartyQuests() {
}

void UQuestManagerComponent::OnGlobalVariableChangedEvent(const FGuid& GlobalVariableID, int32 VariableValue, AActor* Instigator) {
}

void UQuestManagerComponent::MulticastStartQuest_Implementation(FDataTableRowHandle QuestRowHandle, ASurvivalPlayerState* PlayerState) {
}

void UQuestManagerComponent::MulticastCompleteQuest_Implementation(FDataTableRowHandle QuestRowHandle, ASurvivalPlayerState* PlayerState) {
}

void UQuestManagerComponent::MulticastCompleteObjective_Implementation(FDataTableRowHandle QuestRowHandle, int32 QuestIndex, ASurvivalPlayerState* PlayerState) {
}

void UQuestManagerComponent::MulticastActivateObjective_Implementation(FDataTableRowHandle QuestRowHandle, int32 QuestIndex, ASurvivalPlayerState* PlayerState) {
}

bool UQuestManagerComponent::IsQuestStarted(FDataTableRowHandle QuestRowHandle, ASurvivalPlayerState* PlayerState) {
    return false;
}

bool UQuestManagerComponent::IsQuestCompleted(FDataTableRowHandle QuestRowHandle, ASurvivalPlayerState* PlayerState) {
    return false;
}

TArray<UQuest*> UQuestManagerComponent::GetQuests() {
    return TArray<UQuest*>();
}

TArray<UQuest*> UQuestManagerComponent::GetPartyQuests() {
    return TArray<UQuest*>();
}

TArray<UQuest*> UQuestManagerComponent::GetClientQuests(ASurvivalPlayerState* PlayerState) {
    return TArray<UQuest*>();
}

TArray<UQuest*> UQuestManagerComponent::GetActiveTutorialQuests() {
    return TArray<UQuest*>();
}

void UQuestManagerComponent::CompleteQuest(FDataTableRowHandle QuestRowHandle, ASurvivalPlayerState* PlayerState, AActor* Instigator) {
}

void UQuestManagerComponent::CompleteObjective(FDataTableRowHandle QuestRowHandle, int32 QuestIndex, ASurvivalPlayerState* PlayerState, AActor* Instigator) {
}

bool UQuestManagerComponent::AreAllObjectivesActiveAndComplete(FDataTableRowHandle QuestRowHandle, ASurvivalPlayerState* PlayerState) {
    return false;
}

void UQuestManagerComponent::ActivateObjective(FDataTableRowHandle QuestRowHandle, int32 QuestIndex, ASurvivalPlayerState* PlayerState, AActor* Instigator) {
}

void UQuestManagerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UQuestManagerComponent, PartyQuests);
}

UQuestManagerComponent::UQuestManagerComponent() {
}

