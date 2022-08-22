#pragma once
#include "CoreMinimal.h"
#include "ELootLocationType.generated.h"

UENUM()
enum class ELootLocationType : uint8 {
    WorldDrop,
    Inventory,
};

