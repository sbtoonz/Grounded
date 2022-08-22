#pragma once
#include "CoreMinimal.h"
#include "ETutorialDisplayTime.generated.h"

UENUM(BlueprintType)
enum class ETutorialDisplayTime : uint8 {
    FixedTime,
    Infinite,
    FixedTimeShort,
};

