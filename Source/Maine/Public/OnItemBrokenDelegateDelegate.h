#pragma once
#include "CoreMinimal.h"
#include "OnItemBrokenDelegateDelegate.generated.h"

class ASurvivalCharacter;
class UItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnItemBrokenDelegate, ASurvivalCharacter*, Owner, UItem*, Item);

