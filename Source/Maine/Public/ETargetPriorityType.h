#pragma once
#include "CoreMinimal.h"
#include "ETargetPriorityType.generated.h"

UENUM()
enum class ETargetPriorityType : uint8 {
    None,
    PartyMembers,
    Buildings,
};

