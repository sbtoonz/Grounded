#pragma once
#include "CoreMinimal.h"
#include "EVoiceOverAudioImplementationType.generated.h"

UENUM()
enum class EVoiceOverAudioImplementationType : uint8 {
    Default,
    FaceFX,
    FaceFXExternalAudio,
    CurveTables,
    CurveTablesUnrealAudio,
};

