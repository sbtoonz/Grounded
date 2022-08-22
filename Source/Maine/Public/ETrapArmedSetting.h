#pragma once
#include "CoreMinimal.h"
#include "ETrapArmedSetting.generated.h"

UENUM()
enum class ETrapArmedSetting : uint8 {
    Always,
    Manual,
    OnHit,
    OnDeath,
};

