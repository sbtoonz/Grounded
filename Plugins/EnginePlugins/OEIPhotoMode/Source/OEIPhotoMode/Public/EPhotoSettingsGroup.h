#pragma once
#include "CoreMinimal.h"
#include "EPhotoSettingsGroup.generated.h"

UENUM(BlueprintType)
enum class EPhotoSettingsGroup : uint8 {
    None,
    Camera,
    Effects,
    Character,
    World,
};

