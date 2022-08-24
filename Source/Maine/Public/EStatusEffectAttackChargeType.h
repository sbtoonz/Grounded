#pragma once
#include "CoreMinimal.h"
#include "EStatusEffectAttackChargeType.generated.h"

UENUM(BlueprintType)
enum class EStatusEffectAttackChargeType : uint8 {
    Default,
    Charged,
    Uncharged,
};

