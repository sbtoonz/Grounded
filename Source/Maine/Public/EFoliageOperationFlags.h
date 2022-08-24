#pragma once
#include "CoreMinimal.h"
#include "EFoliageOperationFlags.generated.h"

UENUM()
enum class EFoliageOperationFlags : uint8 {
    None,
    LocalOperation,
    Animate,
    UnreplicatedState = 0x4,
    SkipMarkNavDirty = 0x8,
};

