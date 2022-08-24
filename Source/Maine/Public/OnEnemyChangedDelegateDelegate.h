#pragma once
#include "CoreMinimal.h"
#include "OnEnemyChangedDelegateDelegate.generated.h"

class ASurvivalCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnEnemyChangedDelegate, ASurvivalCharacter*, Target, bool, bIsInteractableTarget);

