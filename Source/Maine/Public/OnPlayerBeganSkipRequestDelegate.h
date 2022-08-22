#pragma once
#include "CoreMinimal.h"
#include "OnPlayerBeganSkipRequestDelegate.generated.h"

class APlayerState;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayerBeganSkipRequest, APlayerState*, Player, float, RequestStartTime);

