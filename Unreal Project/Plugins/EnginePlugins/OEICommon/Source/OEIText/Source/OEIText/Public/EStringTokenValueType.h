#pragma once
#include "CoreMinimal.h"
#include "EStringTokenValueType.generated.h"

UENUM(BlueprintType)
enum class EStringTokenValueType : uint8 {
    LocString,
    Integer,
    Float,
};

