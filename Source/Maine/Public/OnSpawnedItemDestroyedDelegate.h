#pragma once
#include "CoreMinimal.h"
#include "OnSpawnedItemDestroyedDelegate.generated.h"

class UItem;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSpawnedItemDestroyed, UItem*, Item);

