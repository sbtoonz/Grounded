#pragma once
#include "CoreMinimal.h"
#include "EAlertState.generated.h"

UENUM()
enum class EAlertState {
    Unaware,
    Aware,
    Suspicious,
    Danger,
};

