#pragma once
#include "CoreMinimal.h"
#include "BuildingCanceledByCombatDelegateDelegate.generated.h"

class ASurvivalPlayerCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBuildingCanceledByCombatDelegate, ASurvivalPlayerCharacter*, Sender);

