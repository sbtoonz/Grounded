#pragma once
#include "CoreMinimal.h"
#include "EDefensePointState.h"
#include "DefensePointStateChangeDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDefensePointStateChangeDelegate, EDefensePointState, CurrentState);

