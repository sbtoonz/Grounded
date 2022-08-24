#pragma once
#include "CoreMinimal.h"
#include "BuildingPowerId.h"
#include "OnBuildingRelocatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBuildingRelocated, FBuildingPowerId, ID);

