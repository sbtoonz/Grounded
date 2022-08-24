#pragma once
#include "CoreMinimal.h"
#include "OnPlayerStatChangedDelegateDelegate.generated.h"

class UPlayerStatConfig;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayerStatChangedDelegate, UPlayerStatConfig*, PlayerStat, int32, Value);

