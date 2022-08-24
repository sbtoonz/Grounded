#pragma once
#include "CoreMinimal.h"
#include "EQuadAudioSatelliteType.generated.h"

UENUM(BlueprintType)
enum class EQuadAudioSatelliteType : uint8 {
    FrontLeft,
    FrontRight,
    BackLeft,
    BackRight,
};

