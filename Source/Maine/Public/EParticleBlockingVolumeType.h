#pragma once
#include "CoreMinimal.h"
#include "EParticleBlockingVolumeType.generated.h"

UENUM()
enum class EParticleBlockingVolumeType : uint8 {
    SphereFade,
    BoxKill,
};

