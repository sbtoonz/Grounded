#pragma once
#include "CoreMinimal.h"
#include "EBuildingBuoyantPlacementMode.generated.h"

UENUM(BlueprintType)
enum class EBuildingBuoyantPlacementMode : uint8 {
    None,
    Surface,
    Any,
};

