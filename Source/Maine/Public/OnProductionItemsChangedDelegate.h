#pragma once
#include "CoreMinimal.h"
#include "OnProductionItemsChangedDelegate.generated.h"

class AProductionBuilding;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnProductionItemsChanged, AProductionBuilding*, Sender);

