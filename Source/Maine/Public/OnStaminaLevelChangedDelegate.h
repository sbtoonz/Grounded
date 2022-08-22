#pragma once
#include "CoreMinimal.h"
#include "OnStaminaLevelChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStaminaLevelChanged, float, CurrentStamina);

