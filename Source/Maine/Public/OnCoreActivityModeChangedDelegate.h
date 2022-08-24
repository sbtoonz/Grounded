#pragma once
#include "CoreMinimal.h"
#include "ECreatureActivityMode.h"
#include "OnCoreActivityModeChangedDelegate.generated.h"

class UInterestCore;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCoreActivityModeChanged, UInterestCore*, Sender, ECreatureActivityMode, ActivityMode);

