#include "Quest.h"
#include "Net/UnrealNetwork.h"

void UQuest::OnRep_QuestChanged() {
}

bool UQuest::IsValidForGamePackage() {
    return false;
}

bool UQuest::IsTutorialQuest() {
    return false;
}

FDataTableRowHandle UQuest::GetQuestDataRowHandle() {
    return FDataTableRowHandle{};
}

FString UQuest::GetObjectiveName(int32 Index) {
    return TEXT("");
}

void UQuest::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UQuest, QuestDataRowHandle);
    DOREPLIFETIME(UQuest, Started);
    DOREPLIFETIME(UQuest, Completed);
    DOREPLIFETIME(UQuest, Objectives);
    DOREPLIFETIME(UQuest, BaseObjectives);
}

UQuest::UQuest() {
    this->Started = false;
    this->Completed = false;
}

