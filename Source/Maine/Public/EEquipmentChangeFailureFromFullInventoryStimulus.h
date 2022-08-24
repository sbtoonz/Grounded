#pragma once
#include "CoreMinimal.h"
#include "EEquipmentChangeFailureFromFullInventoryStimulus.generated.h"

UENUM()
enum class EEquipmentChangeFailureFromFullInventoryStimulus : uint8 {
    Unequip,
    EquipTwoHandedWeapon,
};

