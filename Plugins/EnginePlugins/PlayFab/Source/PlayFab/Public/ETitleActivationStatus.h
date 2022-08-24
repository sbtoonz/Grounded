#pragma once
#include "CoreMinimal.h"
#include "ETitleActivationStatus.generated.h"

UENUM()
enum class ETitleActivationStatus {
    pfenum_None,
    pfenum_ActivatedTitleKey,
    pfenum_PendingSteam,
    pfenum_ActivatedSteam,
    pfenum_RevokedSteam,
    pfenum_MAX UMETA(Hidden),
};

