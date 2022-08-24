#pragma once
#include "CoreMinimal.h"
#include "ESoundDetectionState.generated.h"

UENUM()
enum class ESoundDetectionState : uint8 {
    None,
    Investigating,
};

