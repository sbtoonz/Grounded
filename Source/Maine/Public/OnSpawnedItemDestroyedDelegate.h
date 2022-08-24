#pragma once
#include "CoreMinimal.h"
#include "OnSpawnedItemDestroyedDelegate.generated.h"

class UItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSpawnedItemDestroyed, UItem*, Item);

