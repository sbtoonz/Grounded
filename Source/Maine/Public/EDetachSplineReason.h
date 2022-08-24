#pragma once
#include "CoreMinimal.h"
#include "EDetachSplineReason.generated.h"

UENUM()
enum class EDetachSplineReason : uint8 {
    None,
    Landed,
    Ejecting,
    KnockedOff,
    ToppedOut,
};

