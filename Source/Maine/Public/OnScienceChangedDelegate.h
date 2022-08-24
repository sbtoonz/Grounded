#pragma once
#include "CoreMinimal.h"
#include "OnScienceChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnScienceChanged, int32, ScienceAdded, int32, TotalScience);

