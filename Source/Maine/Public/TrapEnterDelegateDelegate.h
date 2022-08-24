#pragma once
#include "CoreMinimal.h"
#include "TrapEnterDelegateDelegate.generated.h"

class ASurvivalCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTrapEnterDelegate, ASurvivalCharacter*, TargetCharacter);

