#pragma once
#include "CoreMinimal.h"
#include "ECustomPropertyInputType.generated.h"

UENUM(BlueprintType)
enum class ECustomPropertyInputType : uint8 {
    Slider,
    Toggle,
    Dropdown,
};

