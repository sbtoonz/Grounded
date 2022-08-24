#pragma once
#include "CoreMinimal.h"
#include "HazardExitDelegateDelegate.generated.h"

class ASurvivalCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHazardExitDelegate, ASurvivalCharacter*, TargetCharacter);

