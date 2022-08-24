#pragma once
#include "CoreMinimal.h"
#include "EWindowPauseBehavior.generated.h"

UENUM()
enum class EWindowPauseBehavior : uint8 {
    DoNotPause,
    AlwaysPause,
    PauseBasedOnDifficulty,
    Manual,
};

