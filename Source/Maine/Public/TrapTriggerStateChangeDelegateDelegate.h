#pragma once
#include "CoreMinimal.h"
#include "ETrapTriggerState.h"
#include "TrapTriggerStateChangeDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTrapTriggerStateChangeDelegate, ETrapTriggerState, TrapTriggerState);

