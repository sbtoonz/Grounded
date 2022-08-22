#pragma once
#include "CoreMinimal.h"
#include "ECreatureActivityMode.h"
#include "OnComponentActivityModeChangedDelegate.generated.h"

class UInterestComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnComponentActivityModeChanged, UInterestComponent*, Sender, ECreatureActivityMode, ActivityMode);

