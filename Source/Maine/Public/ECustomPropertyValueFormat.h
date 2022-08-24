#pragma once
#include "CoreMinimal.h"
#include "ECustomPropertyValueFormat.generated.h"

UENUM(BlueprintType)
enum class ECustomPropertyValueFormat : uint8 {
    PlainNumber,
    Percent,
    Degrees,
    Seconds,
};

