#pragma once
#include "CoreMinimal.h"
#include "EGameCombatEndReason.generated.h"

UENUM()
enum class EGameCombatEndReason {
    Victory,
    Flee,
    Death,
};

