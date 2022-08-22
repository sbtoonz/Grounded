#pragma once
#include "CoreMinimal.h"
#include "ESocketName.generated.h"

UENUM(BlueprintType)
enum class ESocketName : uint8 {
    None,
    RightHand,
    LeftHand,
    Grass,
    Log,
    ShoulderFar,
    Stack,
    HaulingFallback,
};

