#pragma once
#include "CoreMinimal.h"
#include "OnFabricationProgressDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFabricationProgressDelegate, float, ProgressPercentage);

