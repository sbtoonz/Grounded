#pragma once
#include "CoreMinimal.h"
#include "OnCollectableCollectedDelegateDelegate.generated.h"

class ASurvivalPlayerCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCollectableCollectedDelegate, ASurvivalPlayerCharacter*, Character);

