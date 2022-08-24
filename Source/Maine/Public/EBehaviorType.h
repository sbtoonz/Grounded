#pragma once
#include "CoreMinimal.h"
#include "EBehaviorType.generated.h"

UENUM()
enum class EBehaviorType : uint8 {
    Disabled,
    Combat,
    Investigate,
    InvestigateSound,
    Interact,
    Patrol,
    Retreat,
    Wander,
    Wave,
    FollowBreadcrumbs,
    Explore,
    Flee,
    Emerge,
    TransitionMovement,
    ActivePet,
    InactivePet,
    FollowWander,
    NonPlayerInteract,
    Conversation,
    Idle,
};

