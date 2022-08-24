#pragma once
#include "CoreMinimal.h"
#include "PartyUpgradePointsChangedDelegateDelegate.generated.h"

class ASurvivalPlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPartyUpgradePointsChangedDelegate, int32, Amount, ASurvivalPlayerState*, AcquirerPlayerState);

