#pragma once
#include "CoreMinimal.h"
#include "ETriggerType.generated.h"

UENUM()
enum class ETriggerType : uint8 {
    BeginOverlap,
    EndOverlap,
    PartyOverlap,
};

