#pragma once
#include "CoreMinimal.h"
#include "PointOfInterestDelegateDelegate.generated.h"

class UPointOfInterestDataAsset;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPointOfInterestDelegate, UPointOfInterestDataAsset*, PointOfInterest);

