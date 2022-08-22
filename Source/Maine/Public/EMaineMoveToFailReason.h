#pragma once
#include "CoreMinimal.h"
#include "EMaineMoveToFailReason.generated.h"

UENUM()
enum class EMaineMoveToFailReason {
    Unspecified,
    StuckInLocalMinimum,
    TooInefficient,
    InterestChanged,
    AttackChanged,
    TargetMoved,
};

