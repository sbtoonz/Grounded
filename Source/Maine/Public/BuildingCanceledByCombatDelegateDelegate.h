#pragma once
#include "CoreMinimal.h"
#include "BuildingCanceledByCombatDelegateDelegate.generated.h"

class ASurvivalPlayerCharacter;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBuildingCanceledByCombatDelegate, ASurvivalPlayerCharacter*, Sender);

