#pragma once
#include "CoreMinimal.h"
#include "EHeatHazardCondition.generated.h"

UENUM()
enum class EHeatHazardCondition : uint8 {
    InSunlight,
    OnHotSurface,
    HotTimeOfDay,
    NotInWater,
    InHeatVolume,
    NearHeatEmitter,
    IsSwimming,
};

