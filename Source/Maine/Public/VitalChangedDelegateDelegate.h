#pragma once
#include "CoreMinimal.h"
#include "VitalChangedDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FVitalChangedDelegate, float, VitalValue);

