#pragma once
#include "CoreMinimal.h"
#include "EPhotoModeValueFormat.generated.h"

UENUM(BlueprintType)
enum class EPhotoModeValueFormat : uint8 {
    PlainNumber,
    Aperture,
    Degrees,
    Percent,
    Seconds,
    TimeOfDay24h,
};

