#pragma once
#include "CoreMinimal.h"
#include "OnPowerStateChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPowerStateChanged, bool, IsPowerOn);

