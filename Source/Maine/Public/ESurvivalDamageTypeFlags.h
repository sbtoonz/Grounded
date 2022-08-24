#pragma once
#include "CoreMinimal.h"
#include "ESurvivalDamageTypeFlags.generated.h"

UENUM()
enum class ESurvivalDamageTypeFlags : uint8 {
    Generic,
    Chopping,
    Mining,
    Stabbing,
    Digging,
    Gas,
    Mint,
    Slashing,
    Burning,
    Explosive,
    Shock,
    Salty,
    Spicy,
    Acid,
    Pollen,
    PuffballGas,
    Shockwave,
};

