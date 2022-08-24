#pragma once
#include "CoreMinimal.h"
#include "OnPlayerSkipRequestCompletedDelegate.generated.h"

class APlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerSkipRequestCompleted, APlayerState*, Player);

