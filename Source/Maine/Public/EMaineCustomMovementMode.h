#pragma once
#include "CoreMinimal.h"
#include "EMaineCustomMovementMode.generated.h"

UENUM()
enum EMaineCustomMovementMode {
    CUSTMOVE_None,
    CUSTMOVE_SplineClimb,
    CUSTMOVE_Glide,
    CUSTMOVE_Zipline,
    CUSTMOVE_Perched,
    CUSTMOVE_MAX UMETA(Hidden),
};

