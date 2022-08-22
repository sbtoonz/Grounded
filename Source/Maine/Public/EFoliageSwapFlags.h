#pragma once
#include "CoreMinimal.h"
#include "EFoliageSwapFlags.generated.h"

UENUM()
enum class EFoliageSwapFlags : uint8 {
    None,
    LocalOperation,
    Immediate,
    FromDamage = 0x4,
    FromInteract = 0x8,
};

