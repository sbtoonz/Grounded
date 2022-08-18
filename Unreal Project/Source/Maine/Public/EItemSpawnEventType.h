#pragma once
#include "CoreMinimal.h"
#include "EItemSpawnEventType.generated.h"

UENUM(BlueprintType)
enum class EItemSpawnEventType : uint8 {
    Spawn,
    Despawn,
    Respawn,
};

