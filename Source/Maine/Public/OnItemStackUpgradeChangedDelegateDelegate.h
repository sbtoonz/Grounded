#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "OnItemStackUpgradeChangedDelegateDelegate.generated.h"

class ASurvivalPlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnItemStackUpgradeChangedDelegate, FGameplayTag, StackTag, ASurvivalPlayerState*, AquirerPlayerState);

