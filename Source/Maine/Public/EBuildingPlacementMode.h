#pragma once
#include "CoreMinimal.h"
#include "EBuildingPlacementMode.generated.h"

UENUM()
enum class EBuildingPlacementMode : uint8 {
    None,
    Standard,
    Wall,
    Grid,
};

