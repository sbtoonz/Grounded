#pragma once
#include "CoreMinimal.h"
#include "TrapExitDelegateDelegate.generated.h"

class ASurvivalCharacter;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTrapExitDelegate, ASurvivalCharacter*, TargetCharacter);

