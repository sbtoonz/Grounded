#pragma once
#include "CoreMinimal.h"
#include "OnNodeChangedNetworkDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnNodeChangedNetwork, int32, NodeId, int32, NewNetworkId);

