#pragma once
#include "CoreMinimal.h"
#include "EAttackHitType.generated.h"

UENUM(BlueprintType)
enum class EAttackHitType : uint8 {
    Default,
    ActiveLoop,
    AOE,
    Self,
};

