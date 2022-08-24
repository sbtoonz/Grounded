#pragma once
#include "CoreMinimal.h"
#include "DefensePointBuildingHealthChangedDelegateDelegate.generated.h"

class ABuilding;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDefensePointBuildingHealthChangedDelegate, ABuilding*, DefensePoint);

