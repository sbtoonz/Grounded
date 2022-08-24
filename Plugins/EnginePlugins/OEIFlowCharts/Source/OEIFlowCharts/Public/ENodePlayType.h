#pragma once
#include "CoreMinimal.h"
#include "ENodePlayType.generated.h"

UENUM()
enum class ENodePlayType : uint8 {
    Normal,
    Random,
    CycleLoop,
    CycleStop,
    CycleRandom,
};

