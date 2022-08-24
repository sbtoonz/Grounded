#pragma once
#include "CoreMinimal.h"
#include "CombatChangedDelegateDelegate.generated.h"

class ASurvivalCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCombatChangedDelegate, ASurvivalCharacter*, Character, bool, bInCombat);

