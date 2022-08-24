#pragma once
#include "CoreMinimal.h"
#include "EAnimMovementState.generated.h"

UENUM()
enum class EAnimMovementState {
    OnGround,
    InAir,
    Climbing,
};

