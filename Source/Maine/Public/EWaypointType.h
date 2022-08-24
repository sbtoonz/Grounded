#pragma once
#include "CoreMinimal.h"
#include "EWaypointType.generated.h"

UENUM(BlueprintType)
enum class EWaypointType : uint8 {
    Patrol,
    Emerge,
};

