#pragma once
#include "CoreMinimal.h"
#include "OnCollectableCollectedDelegateDelegate.generated.h"

class ASurvivalPlayerCharacter;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCollectableCollectedDelegate, ASurvivalPlayerCharacter*, Character);

