#pragma once
#include "CoreMinimal.h"
#include "OnNetworkPowerChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnNetworkPowerChanged, int32, NetworkId, float, Power);

