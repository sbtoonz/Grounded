#pragma once
#include "CoreMinimal.h"
#include "EBindableControlCategory.generated.h"

UENUM(BlueprintType)
enum class EBindableControlCategory : uint8 {
    Default,
    Hotpouch,
    BuildingPlacement,
    UI,
    PhotoMode,
};

