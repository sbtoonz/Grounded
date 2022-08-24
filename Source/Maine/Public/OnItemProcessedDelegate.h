#pragma once
#include "CoreMinimal.h"
#include "OnItemProcessedDelegate.generated.h"

class UItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnItemProcessed, UItem*, OldItem, UItem*, NewItem);

