#pragma once
#include "CoreMinimal.h"
#include "OnPlayerUpgradesChangedDelegateDelegate.generated.h"

class UPlayerUpgradeComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerUpgradesChangedDelegate, UPlayerUpgradeComponent*, PlayerUpgradeComponent);

