#pragma once
#include "CoreMinimal.h"
#include "OnCreatureKilledDelegateDelegate.generated.h"

class ASurvivalCharacter;
class ASurvivalPlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCreatureKilledDelegate, ASurvivalCharacter*, Character, ASurvivalPlayerState*, Killer);

