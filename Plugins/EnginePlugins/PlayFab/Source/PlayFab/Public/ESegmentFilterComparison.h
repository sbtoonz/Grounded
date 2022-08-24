#pragma once
#include "CoreMinimal.h"
#include "ESegmentFilterComparison.generated.h"

UENUM()
enum class ESegmentFilterComparison {
    pfenum_GreaterThan,
    pfenum_LessThan,
    pfenum_EqualTo,
    pfenum_NotEqualTo,
    pfenum_GreaterThanOrEqual,
    pfenum_LessThanOrEqual,
    pfenum_Exists,
    pfenum_Contains,
    pfenum_NotContains,
    pfenum_MAX UMETA(Hidden),
};

