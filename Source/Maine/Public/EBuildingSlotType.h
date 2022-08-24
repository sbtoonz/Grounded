#pragma once
#include "CoreMinimal.h"
#include "EBuildingSlotType.generated.h"

UENUM(BlueprintType)
enum class EBuildingSlotType : uint8 {
    None,
    Cell,
    Floor,
    Wall,
};

