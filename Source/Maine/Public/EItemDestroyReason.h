#pragma once
#include "CoreMinimal.h"
#include "EItemDestroyReason.generated.h"

UENUM()
enum class EItemDestroyReason {
    Error,
    Power,
    Durability,
    Hatched,
};

