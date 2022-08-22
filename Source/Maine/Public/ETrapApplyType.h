#pragma once
#include "CoreMinimal.h"
#include "ETrapApplyType.generated.h"

UENUM()
enum class ETrapApplyType : uint8 {
    None,
    Overlap,
    Hit,
    TriggerOnOverlap,
    TriggerOnArmed,
};

