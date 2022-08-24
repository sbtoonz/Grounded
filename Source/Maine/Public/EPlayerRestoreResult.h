#pragma once
#include "CoreMinimal.h"
#include "EPlayerRestoreResult.generated.h"

UENUM()
enum class EPlayerRestoreResult : uint8 {
    PRR_RestoredNothing,
    PRR_RestoredPlayerStateOnly,
    PRR_RestoredPlayerAndPlayerState,
    PRR_MAX UMETA(Hidden),
};

