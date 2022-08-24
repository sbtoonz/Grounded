#pragma once
#include "CoreMinimal.h"
#include "OnSwitchStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSwitchStateChanged, int32, StateIndex);

