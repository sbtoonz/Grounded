#pragma once
#include "CoreMinimal.h"
#include "ESwitchMode.generated.h"

UENUM()
enum class ESwitchMode : uint8 {
    AllowNumUses,
    PingPong,
};

