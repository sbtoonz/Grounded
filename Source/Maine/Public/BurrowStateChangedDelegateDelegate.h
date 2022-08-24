#pragma once
#include "CoreMinimal.h"
#include "EBurrowState.h"
#include "BurrowStateChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBurrowStateChangedDelegate, EBurrowState, BurrowState);

