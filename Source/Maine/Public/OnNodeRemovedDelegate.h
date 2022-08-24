#pragma once
#include "CoreMinimal.h"
#include "OnNodeRemovedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNodeRemoved, int32, NodeId);

