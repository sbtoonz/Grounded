#pragma once
#include "CoreMinimal.h"
#include "OnRespawnPointChangedDelegateDelegate.generated.h"

class ASurvivalPlayerState;
class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRespawnPointChangedDelegate, ASurvivalPlayerState*, PlayerState, AActor*, RespawnPoint);

