#pragma once
#include "CoreMinimal.h"
#include "EEquipmentSlot.generated.h"

UENUM(BlueprintType)
enum class EEquipmentSlot : uint8 {
    None,
    MainHand,
    OffHand,
    Head,
    Chest,
    Arms,
    Legs,
    Glider,
};

