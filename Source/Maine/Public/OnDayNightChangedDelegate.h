#pragma once
#include "CoreMinimal.h"
#include "OnDayNightChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDayNightChanged, bool, bIsDayTime);

