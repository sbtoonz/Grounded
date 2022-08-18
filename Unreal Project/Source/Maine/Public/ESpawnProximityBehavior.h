#pragma once
#include "CoreMinimal.h"
#include "ESpawnProximityBehavior.generated.h"

UENUM(BlueprintType)
enum class ESpawnProximityBehavior : uint8 {
    Always,
    IfNoneNear,
    IfAnyNear,
};

