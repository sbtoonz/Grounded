#pragma once
#include "CoreMinimal.h"
#include "OnRestingTimelapseChangeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRestingTimelapseChange, bool, Active);

