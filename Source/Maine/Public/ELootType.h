#pragma once
#include "CoreMinimal.h"
#include "ELootType.generated.h"

UENUM()
enum class ELootType : uint8 {
    Item,
    Science,
    Equipment,
    Actor,
    Inventory,
};

