#pragma once
#include "CoreMinimal.h"
#include "EGlidingStyle.generated.h"

UENUM(BlueprintType)
enum class EGlidingStyle : uint8 {
    None,
    FallingSlowly,
    Gliding,
};

