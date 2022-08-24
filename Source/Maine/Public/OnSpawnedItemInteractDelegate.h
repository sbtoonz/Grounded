#pragma once
#include "CoreMinimal.h"
#include "OnSpawnedItemInteractDelegate.generated.h"

class UItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSpawnedItemInteract, UItem*, Item);

