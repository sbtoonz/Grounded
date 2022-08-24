#pragma once
#include "CoreMinimal.h"
#include "OnUpgradePointsAquiredDelegateDelegate.generated.h"

class ASurvivalPlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnUpgradePointsAquiredDelegate, bool, IsPartyUpgradePoints, int32, Amount, ASurvivalPlayerState*, AcquirerPlayerState);

