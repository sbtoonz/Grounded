#pragma once
#include "CoreMinimal.h"
#include "OnHourChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHourChanged, int32, NewHour, int32, NewDay);

