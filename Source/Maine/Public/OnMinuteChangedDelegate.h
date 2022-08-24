#pragma once
#include "CoreMinimal.h"
#include "OnMinuteChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMinuteChanged, int32, NewMinute);

