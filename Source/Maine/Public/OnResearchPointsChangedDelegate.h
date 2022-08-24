#pragma once
#include "CoreMinimal.h"
#include "OnResearchPointsChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FOnResearchPointsChanged, float, PreviousProgress, float, NextProgress, int32, PreviousTotal, int32, NextTotal, int32, PointsToNextLevel);

