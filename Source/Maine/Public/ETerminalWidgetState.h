#pragma once
#include "CoreMinimal.h"
#include "ETerminalWidgetState.generated.h"

UENUM(BlueprintType)
enum class ETerminalWidgetState : uint8 {
    Waiting,
    Start,
    Locked,
    Unlocked,
    LockedFlash,
    None,
};

