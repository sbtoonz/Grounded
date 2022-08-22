#pragma once
#include "CoreMinimal.h"
#include "EAttackResolutionType.generated.h"

UENUM(BlueprintType)
enum class EAttackResolutionType : uint8 {
    WontHit,
    InvalidDamageTypeFlagRequirements,
    WillHit,
    Projectile,
    AOE,
};

