#pragma once
#include "CoreMinimal.h"
#include "OnPlayerBusyInMenuChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerBusyInMenuChangedDelegate, bool, bPlayerBusyInMenu);

