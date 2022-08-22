#pragma once
#include "CoreMinimal.h"
#include "ESpawnTargetAllowedTypes.generated.h"

UENUM()
enum class ESpawnTargetAllowedTypes : uint8 {
    Walking,
    Flying,
    All,
};

