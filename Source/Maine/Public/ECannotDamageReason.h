#pragma once
#include "CoreMinimal.h"
#include "ECannotDamageReason.generated.h"

UENUM()
enum class ECannotDamageReason : uint8 {
    None,
    DamageTypeRequired,
    TierRequired,
    Immunity,
};

