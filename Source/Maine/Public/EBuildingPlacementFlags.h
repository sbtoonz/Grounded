#pragma once
#include "CoreMinimal.h"
#include "EBuildingPlacementFlags.generated.h"

UENUM()
enum class EBuildingPlacementFlags : uint8 {
    None,
    AutoAddIngredients = 0x2,
    Deployable = 0x4,
    Relocate = 0x8,
};

