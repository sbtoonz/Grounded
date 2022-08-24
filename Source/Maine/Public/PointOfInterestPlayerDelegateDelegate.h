#pragma once
#include "CoreMinimal.h"
#include "PointOfInterestPlayerDelegateDelegate.generated.h"

class UPointOfInterestDataAsset;
class ASurvivalPlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPointOfInterestPlayerDelegate, UPointOfInterestDataAsset*, PointOfInterest, ASurvivalPlayerState*, UnlockerPlayerState);

