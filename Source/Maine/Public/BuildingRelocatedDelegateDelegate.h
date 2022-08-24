#pragma once
#include "CoreMinimal.h"
#include "BuildingRelocatedDelegateDelegate.generated.h"

class ABuilding;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBuildingRelocatedDelegate, ABuilding*, Building);

