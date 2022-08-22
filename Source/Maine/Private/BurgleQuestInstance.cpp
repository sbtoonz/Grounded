#include "BurgleQuestInstance.h"
#include "Net/UnrealNetwork.h"

class UBurgleQuestTemplate;
class UBurgleObjectiveSimple;
class UBurgleObjectiveProgress;
class UBaseBurgleObjective;

void UBurgleQuestInstance::SetComplete() {
}


void UBurgleQuestInstance::PerformComplete() {
}

void UBurgleQuestInstance::OnRep_Objectives() {
}

void UBurgleQuestInstance::NotifyQuestStart_Implementation() {
}

void UBurgleQuestInstance::NotifyQuestComplete_Implementation() {
}

void UBurgleQuestInstance::NotifyAbandonQuest_Implementation() {
}

void UBurgleQuestInstance::InitializeStarted_Implementation() {
}

bool UBurgleQuestInstance::HasPerformedComplete() const {
    return false;
}

FString UBurgleQuestInstance::GetTitle_Implementation() const {
    return TEXT("");
}

UBurgleQuestTemplate* UBurgleQuestInstance::GetTemplate() const {
    return NULL;
}


FString UBurgleQuestInstance::GetObjectiveText_Implementation(int32 ObjectiveIndex) const {
    return TEXT("");
}

UBurgleObjectiveSimple* UBurgleQuestInstance::GetObjectiveAsSimple(int32 Index) const {
    return NULL;
}

UBurgleObjectiveProgress* UBurgleQuestInstance::GetObjectiveAsProgress(int32 Index) const {
    return NULL;
}

UBaseBurgleObjective* UBurgleQuestInstance::GetObjective(int32 Index) const {
    return NULL;
}

bool UBurgleQuestInstance::GetGenerationFailed() const {
    return false;
}


FString UBurgleQuestInstance::GetDescriptionText_Implementation() const {
    return TEXT("");
}

UBaseBurgleObjective* UBurgleQuestInstance::GetCurrentObjective() const {
    return NULL;
}

void UBurgleQuestInstance::GenerateParameters_Implementation() {
}

void UBurgleQuestInstance::FailGeneration() {
}


void UBurgleQuestInstance::CleanUpQuest_Implementation() {
}

void UBurgleQuestInstance::AddObjective(UBaseBurgleObjective* Objective) {
}

void UBurgleQuestInstance::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UBurgleQuestInstance, Objectives);
    DOREPLIFETIME(UBurgleQuestInstance, bPerformedComplete);
}

UBurgleQuestInstance::UBurgleQuestInstance() {
    this->bPerformedComplete = false;
    this->Template = NULL;
}

