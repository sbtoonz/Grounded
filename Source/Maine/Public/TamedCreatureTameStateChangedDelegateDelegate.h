#pragma once
#include "CoreMinimal.h"
#include "ETamedState.h"
#include "TamedCreatureTameStateChangedDelegateDelegate.generated.h"

class UTamedCreatureData;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTamedCreatureTameStateChangedDelegate, UTamedCreatureData*, Sender, ETamedState, NewState);

