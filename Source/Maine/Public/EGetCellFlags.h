#pragma once
#include "CoreMinimal.h"
#include "EGetCellFlags.generated.h"

UENUM()
enum class EGetCellFlags : uint8 {
    None,
    IncludeIntersections,
    IncludeSupporting,
    IncludeBlocking = 0x4,
    ExpandChildSlots = 0x8,
    IncludeSupportingIntersections = 0x3,
    IncludeBlockingIntersections = 0x5,
    IncludeAll = 0x7,
    EGetCellFlags_MAX = 0x9,
};

