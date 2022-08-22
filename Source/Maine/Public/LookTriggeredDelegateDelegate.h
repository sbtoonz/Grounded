#pragma once
#include "CoreMinimal.h"
#include "LookTriggeredParams.h"
#include "LookTriggeredDelegateDelegate.generated.h"

class UBaseLookTriggerComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FLookTriggeredDelegate, UBaseLookTriggerComponent*, Sender, FLookTriggeredParams, Params);

