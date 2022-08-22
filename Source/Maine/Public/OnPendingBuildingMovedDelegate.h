#pragma once
#include "CoreMinimal.h"
#include "BuildingGridLocation.h"
#include "OnPendingBuildingMovedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPendingBuildingMoved, FBuildingGridLocation, NewLocation);

