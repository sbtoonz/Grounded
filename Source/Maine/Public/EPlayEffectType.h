#pragma once
#include "CoreMinimal.h"
#include "EPlayEffectType.generated.h"

UENUM()
enum class EPlayEffectType : uint8 {
    None,
    All,
    SoundOnly,
    ParticlesOnly,
};

