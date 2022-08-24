#pragma once
#include "CoreMinimal.h"
#include "ETargetType.generated.h"

UENUM()
enum class ETargetType {
    Default,
    Character,
    PartyMember,
    Building,
    IgnoredBuilding,
    ThreatBuilding,
    PawnBuilding,
};

