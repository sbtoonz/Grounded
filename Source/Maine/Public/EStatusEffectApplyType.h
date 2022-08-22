#pragma once
#include "CoreMinimal.h"
#include "EStatusEffectApplyType.generated.h"

UENUM(BlueprintType)
enum class EStatusEffectApplyType : uint8 {
    None,
    OverTime,
    Instant,
};

