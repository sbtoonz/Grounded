#pragma once
#include "CoreMinimal.h"
#include "EStatusEffectDurationType.generated.h"

UENUM(BlueprintType)
enum class EStatusEffectDurationType : uint8 {
    Duration,
    Infinite,
    Instant,
    DayNight,
};

