#pragma once
#include "CoreMinimal.h"
#include "ECancellationReason.generated.h"

UENUM()
enum class ECancellationReason {
    pfenum_Requested,
    pfenum_Internal,
    pfenum_Timeout,
    pfenum_MAX UMETA(Hidden),
};

