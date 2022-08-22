#pragma once
#include "CoreMinimal.h"
#include "EWaveCreatureWeightClass.generated.h"

UENUM(BlueprintType)
enum class EWaveCreatureWeightClass : uint8 {
    None,
    VeryLight,
    Light,
    Medium,
    Heavy,
    VeryHeavy,
};

