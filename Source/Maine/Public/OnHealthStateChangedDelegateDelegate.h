#pragma once
#include "CoreMinimal.h"
#include "EHealthState.h"
#include "OnHealthStateChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHealthStateChangedDelegate, EHealthState, NewHealthState);

