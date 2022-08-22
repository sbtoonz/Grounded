#pragma once
#include "CoreMinimal.h"
#include "OnBossPhaseChangeDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBossPhaseChange, int32, NewPhase);

