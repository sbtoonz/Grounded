#pragma once
#include "CoreMinimal.h"
#include "EBuildingGridSurfaceType.generated.h"

UENUM(BlueprintType)
enum class EBuildingGridSurfaceType : uint8 {
    None,
    Invalid,
    Water = 0x4,
    Default = 0x7,
};

