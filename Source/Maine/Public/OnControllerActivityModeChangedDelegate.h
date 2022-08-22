#pragma once
#include "CoreMinimal.h"
#include "ECreatureActivityMode.h"
#include "OnControllerActivityModeChangedDelegate.generated.h"

class ASurvivalAIController;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnControllerActivityModeChanged, ASurvivalAIController*, Sender, ECreatureActivityMode, ActivityMode);

