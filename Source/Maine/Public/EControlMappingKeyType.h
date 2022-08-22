#pragma once
#include "CoreMinimal.h"
#include "EControlMappingKeyType.generated.h"

UENUM(BlueprintType)
enum class EControlMappingKeyType : uint8 {
    None,
    Action,
    Axis,
};

