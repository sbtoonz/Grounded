#pragma once
#include "CoreMinimal.h"
#include "OnResourceSurveyVisibleChangeDelegateDelegate.generated.h"

class ASurvivalPlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnResourceSurveyVisibleChangeDelegate, ASurvivalPlayerState*, Sender, bool, bResourceSurveyVisible);

