#pragma once
#include "CoreMinimal.h"
#include "VitalChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FVitalChangedDelegate, float, VitalValue);

