#pragma once
#include "CoreMinimal.h"
#include "EInteractHoldHandleType.generated.h"

UENUM()
enum class EInteractHoldHandleType : uint8 {
    None,
    HandleHoldInteract,
    HandleNonHoldInteract,
    Interrupted,
};

