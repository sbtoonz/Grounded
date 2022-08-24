#pragma once
#include "CoreMinimal.h"
#include "TrapItemAddedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTrapItemAddedDelegate, int32, ItemCount);

