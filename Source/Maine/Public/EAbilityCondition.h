#pragma once
#include "CoreMinimal.h"
#include "EAbilityCondition.generated.h"

UENUM()
enum class EAbilityCondition : uint8 {
    None,
    CanHitDirectly,
    CanHitDirecltyMultipleWithAOE,
    IsPreferedAbility,
    HasRecentlyPushedbackTarget,
    IsNotInBurrow,
    IsInBurrow,
    ScriptedBPCondition,
    IsUnderground,
    IsNotUnderground,
};

