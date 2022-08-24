#pragma once
#include "CoreMinimal.h"
#include "OnBuildingPowerConnectionRemovedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnBuildingPowerConnectionRemoved, int32, NodeA, int32, NodeB);

