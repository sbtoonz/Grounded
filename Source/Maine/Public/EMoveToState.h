#pragma once
#include "CoreMinimal.h"
#include "EMoveToState.generated.h"

UENUM()
enum class EMoveToState {
    None,
    MoveToTarget,
    MoveToNavMesh,
    Failed,
    Success,
};

