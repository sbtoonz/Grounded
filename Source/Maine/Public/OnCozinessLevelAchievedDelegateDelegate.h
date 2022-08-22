#pragma once
#include "CoreMinimal.h"
#include "OnCozinessLevelAchievedDelegateDelegate.generated.h"

class UPartyComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCozinessLevelAchievedDelegate, UPartyComponent*, Sender, int32, NewLevel);

