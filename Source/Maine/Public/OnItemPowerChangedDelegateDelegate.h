#pragma once
#include "CoreMinimal.h"
#include "OnItemPowerChangedDelegateDelegate.generated.h"

class UItem;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemPowerChangedDelegate, UItem*, Item);

