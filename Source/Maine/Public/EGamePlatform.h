#pragma once
#include "CoreMinimal.h"
#include "EGamePlatform.generated.h"

UENUM()
enum class EGamePlatform : uint8 {
    XboxOne,
    WindowsStore,
    WindowsSteam,
    XboxScarlett,
};

