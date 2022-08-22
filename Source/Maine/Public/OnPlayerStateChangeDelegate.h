#pragma once
#include "CoreMinimal.h"
#include "OnPlayerStateChangeDelegate.generated.h"

class ASurvivalPlayerState;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerStateChange, ASurvivalPlayerState*, PlayerState);

