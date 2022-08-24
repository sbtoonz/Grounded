#pragma once
#include "CoreMinimal.h"
#include "EFabricationState.h"
#include "OnFabricationStateChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFabricationStateChangedDelegate, EFabricationState, NewState);

