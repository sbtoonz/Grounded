#pragma once
#include "CoreMinimal.h"
#include "EWaveAttackState.h"
#include "WaveAttackStateChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWaveAttackStateChangedDelegate, EWaveAttackState, WaveAttackState);

