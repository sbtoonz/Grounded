#pragma once
#include "CoreMinimal.h"
#include "ESetBuildingStateFlags.generated.h"

UENUM()
enum class ESetBuildingStateFlags {
    None,
    Force = 0x2,
    FromInstance = 0x4,
    SkipFlush = 0x8,
};

