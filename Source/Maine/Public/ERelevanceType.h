#pragma once
#include "CoreMinimal.h"
#include "ERelevanceType.generated.h"

UENUM()
enum class ERelevanceType : uint8 {
    Relevant,
    FarAway,
    NotRendering,
    FarAwayNotRendering,
    NumBits = 0x2,
    ERelevanceType_MAX = 0x4,
};

