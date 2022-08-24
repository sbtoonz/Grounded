#pragma once
#include "CoreMinimal.h"
#include "HealthChangedDelegateDelegate.generated.h"

class UHealthComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FHealthChangedDelegate, UHealthComponent*, SourceHealthComponent, float, NewHealth, float, OldHealth);

