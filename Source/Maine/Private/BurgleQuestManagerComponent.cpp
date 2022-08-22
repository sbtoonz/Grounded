#include "BurgleQuestManagerComponent.h"
#include "Net/UnrealNetwork.h"

class ASurvivalPlayerController;
class UBurgleQuestInstance;
class UBaseObjective;

bool UBurgleQuestManagerComponent::TryRequestRefillQuests(ASurvivalPlayerController* Instigator) {
    return false;
}

void UBurgleQuestManagerComponent::RejectQuest(UBurgleQuestInstance* Quest) {
}

void UBurgleQuestManagerComponent::OnRep_AvailableQuests() {
}

void UBurgleQuestManagerComponent::OnRep_ActiveQuests() {
}

void UBurgleQuestManagerComponent::MulticastStartQuest_Implementation(UBurgleQuestInstance* Quest) {
}

void UBurgleQuestManagerComponent::MulticastQuestsRefilled_Implementation() {
}

void UBurgleQuestManagerComponent::MulticastObjectiveUpdated_Implementation(UBurgleQuestInstance* Quest, UBaseObjective* Objective) {
}

void UBurgleQuestManagerComponent::MulticastCompleteQuest_Implementation(UBurgleQuestInstance* Quest) {
}

float UBurgleQuestManagerComponent::GetProgressRating() const {
    return 0.0f;
}

int32 UBurgleQuestManagerComponent::GetCompletedQuestCount() const {
    return 0;
}

TArray<UBurgleQuestInstance*> UBurgleQuestManagerComponent::GetAvailableQuests() const {
    return TArray<UBurgleQuestInstance*>();
}

int32 UBurgleQuestManagerComponent::GetAvailableQuestCount() const {
    return 0;
}

TArray<UBurgleQuestInstance*> UBurgleQuestManagerComponent::GetAllQuests() const {
    return TArray<UBurgleQuestInstance*>();
}

TArray<UBurgleQuestInstance*> UBurgleQuestManagerComponent::GetActiveQuests() const {
    return TArray<UBurgleQuestInstance*>();
}

void UBurgleQuestManagerComponent::ForceRegenerateQuests() {
}

void UBurgleQuestManagerComponent::DebugSetCompletedQuestCount(int32 Count) {
}

void UBurgleQuestManagerComponent::AcceptQuest(UBurgleQuestInstance* Quest) {
}

void UBurgleQuestManagerComponent::AbandonQuest(UBurgleQuestInstance* Quest) {
}

void UBurgleQuestManagerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UBurgleQuestManagerComponent, AvailableQuests);
    DOREPLIFETIME(UBurgleQuestManagerComponent, LastDayGenerated);
    DOREPLIFETIME(UBurgleQuestManagerComponent, ActiveQuests);
}

UBurgleQuestManagerComponent::UBurgleQuestManagerComponent() {
    this->MaxSimultaneousQuests = 3;
    this->CompletedQuestProgressWeight = 0.10f;
    this->DayProgressWeight = 0.20f;
    this->LastDayGenerated = -1;
}

