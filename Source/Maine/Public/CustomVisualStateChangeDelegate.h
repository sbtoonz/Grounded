#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "CustomVisualStateChangeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCustomVisualStateChange, FGameplayTag, CustomVisualState);

