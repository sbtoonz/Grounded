#pragma once
#include "CoreMinimal.h"
#include "EGardenModifierType.generated.h"

UENUM(BlueprintType)
enum class EGardenModifierType : uint8 {
    None,
    Duration,
    RareSpawnChance,
};

