#pragma once
#include "CoreMinimal.h"
#include "BuildingGridBuilding.h"
#include "BuildingGridKey.h"
#include "BuildingRegisteredDelegateDelegate.generated.h"

class UBuildingGridComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FBuildingRegisteredDelegate, UBuildingGridComponent*, Sender, const FBuildingGridBuilding&, Building, const FBuildingGridKey&, Slot);

