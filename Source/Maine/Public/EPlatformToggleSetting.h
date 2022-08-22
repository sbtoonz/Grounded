#pragma once
#include "CoreMinimal.h"
#include "EPlatformToggleSetting.generated.h"

UENUM()
enum class EPlatformToggleSetting : uint8 {
    All,
    XBoxOnly,
    WindowsOnly,
};

