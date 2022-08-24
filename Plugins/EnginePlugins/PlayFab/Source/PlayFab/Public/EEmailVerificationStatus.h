#pragma once
#include "CoreMinimal.h"
#include "EEmailVerificationStatus.generated.h"

UENUM()
enum class EEmailVerificationStatus {
    pfenum_Unverified,
    pfenum_Pending,
    pfenum_Confirmed,
    pfenum_MAX UMETA(Hidden),
};

