#pragma once
#include "CoreMinimal.h"
#include "OnGardenItemsChangedDelegate.generated.h"

class AGardenBuilding;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGardenItemsChanged, AGardenBuilding*, Sender);

