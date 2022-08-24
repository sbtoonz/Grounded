#pragma once
#include "CoreMinimal.h"
#include "EChatterInterruptionLevel.generated.h"

UENUM()
enum class EChatterInterruptionLevel : uint8 {
    All,
    EventType,
    Set,
    Character,
};

