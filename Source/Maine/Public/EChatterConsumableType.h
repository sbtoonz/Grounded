#pragma once
#include "CoreMinimal.h"
#include "EChatterConsumableType.generated.h"

UENUM(BlueprintType)
enum class EChatterConsumableType : uint8 {
    None,
    GenericFood,
    GenericWater,
    DirtyWater,
    Juice,
    CookedMeat,
    SpoiledMeat,
    Mushroom,
    Smoothie,
    RawMeat,
    DriedMeat,
};

