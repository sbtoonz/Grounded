#pragma once
#include "CoreMinimal.h"
#include "ELootSpawnType.generated.h"

UENUM()
enum class ELootSpawnType : uint8 {
    SpawnOnTrigger,
    SpawnOnHit,
    SpawnOnDeath,
    SpawnOnInteract,
};

