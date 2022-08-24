#pragma once
#include "CoreMinimal.h"
#include "OnSittingModeChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSittingModeChangedDelegate, bool, bIsSitting);

