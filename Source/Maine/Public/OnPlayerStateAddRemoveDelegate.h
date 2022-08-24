#pragma once
#include "CoreMinimal.h"
#include "OnPlayerStateAddRemoveDelegate.generated.h"

class APlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerStateAddRemove, APlayerState*, PlayerState);

