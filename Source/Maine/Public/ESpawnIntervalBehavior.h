#pragma once
#include "CoreMinimal.h"
#include "ESpawnIntervalBehavior.generated.h"

UENUM(BlueprintType)
enum class ESpawnIntervalBehavior : uint8 {
    None,
    OnSpecificHour,
    OnElapsedHours,
    OnRest,
    OnApproach,
    OnStart,
    OnConditionalMet,
};

