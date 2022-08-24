#pragma once
#include "CoreMinimal.h"
#include "UpdateVisualStateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateVisualState, bool, IsOpen);

