#pragma once
#include "CoreMinimal.h"
#include "BuildingErrorDelegateDelegate.generated.h"

class UBuildingPlacementComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBuildingErrorDelegate, UBuildingPlacementComponent*, Sender, const FString&, ErrorString);

