#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "OnPowerStoredChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPowerStoredChanged, const FGameplayTag&, PowerType, float, StoredAmount);

