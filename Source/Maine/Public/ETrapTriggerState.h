#pragma once
#include "CoreMinimal.h"
#include "ETrapTriggerState.generated.h"

UENUM()
enum class ETrapTriggerState : uint8 {
    None,
    Waiting,
    TriggerDelay,
    Triggered,
};

