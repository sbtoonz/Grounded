#pragma once
#include "CoreMinimal.h"
#include "BuildingManagerBuildingDelegateDelegate.generated.h"

class UBuildingManagerComponent;
class ABuilding;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBuildingManagerBuildingDelegate, UBuildingManagerComponent*, Sender, ABuilding*, Building);

