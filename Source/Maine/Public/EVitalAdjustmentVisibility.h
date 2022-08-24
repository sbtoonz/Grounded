#pragma once
#include "CoreMinimal.h"
#include "EVitalAdjustmentVisibility.generated.h"

UENUM(BlueprintType)
enum class EVitalAdjustmentVisibility : uint8 {
    Normal,
    Fake,
    Hidden,
};

