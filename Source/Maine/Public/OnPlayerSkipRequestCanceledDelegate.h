#pragma once
#include "CoreMinimal.h"
#include "OnPlayerSkipRequestCanceledDelegate.generated.h"

class APlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerSkipRequestCanceled, APlayerState*, Player);

