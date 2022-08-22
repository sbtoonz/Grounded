#pragma once
#include "CoreMinimal.h"
#include "OnPlayerStateAddRemoveDelegate.generated.h"

class APlayerState;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerStateAddRemove, APlayerState*, PlayerState);

