#include "Objective.h"
#include "Net/UnrealNetwork.h"

void UObjective::OnRep_ObjectiveChanged() {
}

bool UObjective::IsValidForGamePackage() {
    return false;
}

bool UObjective::IsTutorialObjective() {
    return false;
}

bool UObjective::IsCritPathObjective() {
    return false;
}

FDataTableRowHandle UObjective::GetQuestDataRowHandle() {
    return FDataTableRowHandle{};
}

FName UObjective::GetObjectiveControl(EGameInputType InputType) {
    return NAME_None;
}

void UObjective::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UObjective, QuestDataRowHandle);
    DOREPLIFETIME(UObjective, ObjectiveIndex);
    DOREPLIFETIME(UObjective, bActive);
    DOREPLIFETIME(UObjective, bCompleted);
}

UObjective::UObjective() {
    this->ObjectiveIndex = 0;
    this->bActive = false;
    this->bCompleted = false;
}

