#pragma once
#include "CoreMinimal.h"
#include "EBirdState.generated.h"

UENUM()
enum class EBirdState : uint8 {
    Despawned,
    Arriving,
    Landed,
    Leaving,
};

