#pragma once
#include "CoreMinimal.h"
#include "EProxyPathingFailureEvent.generated.h"

UENUM()
enum class EProxyPathingFailureEvent {
    None,
    ProjectStart,
    ProjectEnd,
    FindPath,
    Obstructed,
    LocalMinimum,
};

