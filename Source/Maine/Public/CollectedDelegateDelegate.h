#pragma once
#include "CoreMinimal.h"
#include "CollectedDelegateDelegate.generated.h"

class ASurvivalPlayerCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCollectedDelegate, ASurvivalPlayerCharacter*, Character);

