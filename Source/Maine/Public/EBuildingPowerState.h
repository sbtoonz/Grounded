#pragma once
#include "CoreMinimal.h"
#include "EBuildingPowerState.generated.h"

UENUM()
enum class EBuildingPowerState : uint8 {
    BuildingPowerFeatureDisabled,
    Off,
    LowPower,
    FullPower,
};

