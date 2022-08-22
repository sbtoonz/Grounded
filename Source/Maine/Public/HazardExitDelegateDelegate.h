#pragma once
#include "CoreMinimal.h"
#include "HazardExitDelegateDelegate.generated.h"

class ASurvivalCharacter;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHazardExitDelegate, ASurvivalCharacter*, TargetCharacter);

