#pragma once
#include "CoreMinimal.h"
#include "EStatisticVersionArchivalStatus.generated.h"

UENUM()
enum class EStatisticVersionArchivalStatus {
    pfenum_NotScheduled,
    pfenum_Scheduled,
    pfenum_Queued,
    pfenum_InProgress,
    pfenum_Complete,
    pfenum_MAX UMETA(Hidden),
};

