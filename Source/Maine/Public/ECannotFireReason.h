#pragma once
#include "CoreMinimal.h"
#include "ECannotFireReason.generated.h"

UENUM()
enum class ECannotFireReason {
    None,
    Cooldown,
    NoAmmo,
};

