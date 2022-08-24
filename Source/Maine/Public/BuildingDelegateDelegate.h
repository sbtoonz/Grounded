#pragma once
#include "CoreMinimal.h"
#include "BuildingDelegateDelegate.generated.h"

class ABuilding;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBuildingDelegate, ABuilding*, Building);

