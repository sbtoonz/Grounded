#pragma once
#include "CoreMinimal.h"
#include "OnFabricationProgressDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFabricationProgressDelegate, float, ProgressPercentage);

