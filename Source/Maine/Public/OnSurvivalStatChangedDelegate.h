#pragma once
#include "CoreMinimal.h"
#include "OnSurvivalStatChangedDelegate.generated.h"

class USurvivalComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnSurvivalStatChanged, USurvivalComponent*, Sender, float, OldValue, float, NewValue);

