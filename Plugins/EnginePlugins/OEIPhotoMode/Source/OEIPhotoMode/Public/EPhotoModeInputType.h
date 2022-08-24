#pragma once
#include "CoreMinimal.h"
#include "EPhotoModeInputType.generated.h"

UENUM(BlueprintType)
enum class EPhotoModeInputType : uint8 {
    Slider,
    CheckBox,
    ComboBox,
};

