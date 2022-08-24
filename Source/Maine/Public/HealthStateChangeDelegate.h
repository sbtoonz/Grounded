#pragma once
#include "CoreMinimal.h"
#include "EHealthVisualState.h"
#include "HealthStateChangeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FHealthStateChange, EHealthVisualState, HealthState, EHealthVisualState, OldHealthState, bool, bMoreDamage);

