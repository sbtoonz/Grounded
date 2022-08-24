#pragma once
#include "CoreMinimal.h"
#include "EPhotoModeEntryAllowedResult.generated.h"

UENUM()
enum class EPhotoModeEntryAllowedResult : uint8 {
    Allowed,
    UnallowedGameplaySequence,
    UnallowedSpectatorMode,
    UnallowedMultiplayer,
    UnallowedPlayerUnpossessed,
    Unallowed,
};

