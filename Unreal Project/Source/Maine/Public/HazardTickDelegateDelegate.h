#pragma once
#include "CoreMinimal.h"
#include "HazardTickDelegateDelegate.generated.h"

class ASurvivalCharacter;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHazardTickDelegate, const TArray<ASurvivalCharacter*>&, TargetCharacters);

