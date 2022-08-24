#pragma once
#include "CoreMinimal.h"
#include "ETriggerSourceType.generated.h"

UENUM()
enum class ETriggerSourceType : uint8 {
    Node,
    Programmatic,
};

