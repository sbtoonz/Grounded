#pragma once
#include "CoreMinimal.h"
#include "HazardEnabledDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHazardEnabledDelegate, bool, bEnabled);

