#pragma once
#include "CoreMinimal.h"
#include "BuildingGridDelegateDelegate.generated.h"

class UBuildingGridComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBuildingGridDelegate, UBuildingGridComponent*, Sender);

