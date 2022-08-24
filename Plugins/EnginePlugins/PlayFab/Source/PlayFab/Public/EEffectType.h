#pragma once
#include "CoreMinimal.h"
#include "EEffectType.generated.h"

UENUM()
enum class EEffectType {
    pfenum_Allow,
    pfenum_Deny,
    pfenum_MAX UMETA(Hidden),
};

