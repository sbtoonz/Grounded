#pragma once
#include "CoreMinimal.h"
#include "OnRespawnDelegateDelegate.generated.h"

class APlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRespawnDelegate, APlayerController*, Controller);

