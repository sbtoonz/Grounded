#include "BaseObjective.h"

bool UBaseObjective::IsCompleted() const {
    return false;
}

bool UBaseObjective::IsActive() const {
    return false;
}

FString UBaseObjective::GetVerboseName() const {
    return TEXT("");
}

FString UBaseObjective::GetDisplayName() const {
    return TEXT("");
}

UBaseObjective::UBaseObjective() {
}

