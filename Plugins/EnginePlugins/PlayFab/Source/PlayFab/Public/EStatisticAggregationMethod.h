#pragma once
#include "CoreMinimal.h"
#include "EStatisticAggregationMethod.generated.h"

UENUM(BlueprintType)
enum class EStatisticAggregationMethod : uint8 {
    pfenum_Last,
    pfenum_Min,
    pfenum_Max,
    pfenum_Sum,
};

