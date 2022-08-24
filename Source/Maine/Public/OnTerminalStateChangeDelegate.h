#pragma once
#include "CoreMinimal.h"
#include "TerminalConditional.h"
#include "OnTerminalStateChangeDelegate.generated.h"

class ATerminalSwitch;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTerminalStateChange, ATerminalSwitch*, Terminal, const FTerminalConditional&, ConditionalState);

