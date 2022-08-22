#pragma once
#include "CoreMinimal.h"
#include "ESwimmingMovementType.generated.h"

UENUM(BlueprintType)
enum class ESwimmingMovementType : uint8 {
    None,
    Passive,
    Sprinting,
};

