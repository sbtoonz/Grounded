#pragma once
#include "CoreMinimal.h"
#include "EManagedPostProcessBitMasks.generated.h"

UENUM(BlueprintType)
enum class EManagedPostProcessBitMasks : uint8 {
    None,
    Stencil,
    FragilityStencil = 0xE,
    Construction = 0x80,
};

