#pragma once
#include "CoreMinimal.h"
#include "EDefensePointState.generated.h"

UENUM()
enum class EDefensePointState : uint8 {
    Ready,
    InProgress,
    Success,
    Failure,
};

