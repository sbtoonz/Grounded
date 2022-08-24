#pragma once
#include "CoreMinimal.h"
#include "PawnRespawnedDelegateDelegate.generated.h"

class ASurvivalCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPawnRespawnedDelegate, ASurvivalCharacter*, OldActor, ASurvivalCharacter*, NewActor);

