#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "OnContextActionDelegate.generated.h"

class UBaseSlotWidget;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnContextAction, UBaseSlotWidget*, BaseSlotWidget, const FGameplayTag&, ActionTag);

