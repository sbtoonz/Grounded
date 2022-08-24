#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "OnContextActionDelegate.generated.h"

class UBaseSlotWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnContextAction, UBaseSlotWidget*, BaseSlotWidget, const FGameplayTag&, ActionTag);

