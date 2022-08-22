#pragma once
#include "CoreMinimal.h"
#include "OnResourceSurveyVisibleChangeDelegateDelegate.generated.h"

class ASurvivalPlayerState;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnResourceSurveyVisibleChangeDelegate, ASurvivalPlayerState*, Sender, bool, bResourceSurveyVisible);

