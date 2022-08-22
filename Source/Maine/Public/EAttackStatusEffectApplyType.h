#pragma once
#include "CoreMinimal.h"
#include "EAttackStatusEffectApplyType.generated.h"

UENUM(BlueprintType)
enum class EAttackStatusEffectApplyType : uint8 {
    DamageOnly,
    Always,
};

