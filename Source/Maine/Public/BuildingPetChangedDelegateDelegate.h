#pragma once
#include "CoreMinimal.h"
#include "BuildingPetChangedDelegateDelegate.generated.h"

class APetHomeBuilding;
class ASurvivalCreature;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBuildingPetChangedDelegate, APetHomeBuilding*, Sender, ASurvivalCreature*, Pet);

