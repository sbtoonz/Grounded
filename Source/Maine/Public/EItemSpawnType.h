#pragma once
#include "CoreMinimal.h"
#include "EItemSpawnType.generated.h"

UENUM()
enum class EItemSpawnType {
    World,
    Equippable,
    Cooking,
    Drying,
    Processing,
};

