#pragma once
#include "CoreMinimal.h"
#include "OnNetworksCoalescedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnNetworksCoalesced, int32, DestinationNetwork, int32, RemovedNetwork);

