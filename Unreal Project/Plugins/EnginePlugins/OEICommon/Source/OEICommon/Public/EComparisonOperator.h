#pragma once
#include "CoreMinimal.h"
#include "EComparisonOperator.generated.h"

UENUM(BlueprintType)
enum class EComparisonOperator : uint8 {
    Equals,
    NotEqual,
    GreaterThan,
    LessThan,
    GreaterThanOrEquals,
    LessThanOrEquals,
};

