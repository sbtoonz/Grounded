#pragma once
#include "CoreMinimal.h"
#include "EObjectiveState.generated.h"

UENUM()
enum class EObjectiveState {
    Invalid,
    Active,
    Succeeded,
    Failed,
    Irrelevant,
    Pending,
};

