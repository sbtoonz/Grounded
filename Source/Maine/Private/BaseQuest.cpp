#include "BaseQuest.h"

class UBaseObjective;

bool UBaseQuest::IsCompleted() const {
    return false;
}

TArray<UBaseObjective*> UBaseQuest::GetObjectives() const {
    return TArray<UBaseObjective*>();
}

FString UBaseQuest::GetDisplayName() const {
    return TEXT("");
}

FString UBaseQuest::GetDisplayDescription() const {
    return TEXT("");
}

UBaseQuest::UBaseQuest() {
}

