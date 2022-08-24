#pragma once
#include "CoreMinimal.h"
#include "EHazardEffectApplyType.generated.h"

UENUM()
enum class EHazardEffectApplyType : uint8 {
    Overlap,
    Interval,
};

