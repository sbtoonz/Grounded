#pragma once
#include "CoreMinimal.h"
#include "HazardEnterDelegateDelegate.generated.h"

class ASurvivalCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHazardEnterDelegate, ASurvivalCharacter*, TargetCharacter);

