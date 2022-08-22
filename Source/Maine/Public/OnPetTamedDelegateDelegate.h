#pragma once
#include "CoreMinimal.h"
#include "OnPetTamedDelegateDelegate.generated.h"

class ASurvivalCreature;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPetTamedDelegate, ASurvivalCreature*, Pet);

