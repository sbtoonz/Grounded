#pragma once
#include "CoreMinimal.h"
#include "GoapActionInstance.h"
#include "GoapActionDelegateDelegate.generated.h"

class UInterestCore;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGoapActionDelegate, UInterestCore*, Sender, FGoapActionInstance, Action);

