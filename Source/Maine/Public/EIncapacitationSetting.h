#pragma once
#include "CoreMinimal.h"
#include "EIncapacitationSetting.generated.h"

UENUM()
enum class EIncapacitationSetting : uint8 {
    None,
    Always,
    MultiplayerOnly,
};

