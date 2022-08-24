#pragma once
#include "CoreMinimal.h"
#include "EDamageEventType.generated.h"

UENUM(BlueprintType)
enum class EDamageEventType : uint8 {
    Invalid,
    Point,
    Radial,
    Generic,
};

