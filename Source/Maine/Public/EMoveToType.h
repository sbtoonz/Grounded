#pragma once
#include "CoreMinimal.h"
#include "EMoveToType.generated.h"

UENUM()
enum class EMoveToType {
    None,
    MoveToActor,
    MoveToLocation,
};

