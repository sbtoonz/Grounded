#pragma once
#include "CoreMinimal.h"
#include "OnFragilityLevelChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFragilityLevelChanged, int32, CurrentFragilityLevel);

