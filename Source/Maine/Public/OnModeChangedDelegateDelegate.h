#pragma once
#include "CoreMinimal.h"
#include "OnModeChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnModeChangedDelegate, bool, bState);

