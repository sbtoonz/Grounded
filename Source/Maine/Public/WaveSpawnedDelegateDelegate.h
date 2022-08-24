#pragma once
#include "CoreMinimal.h"
#include "WaveSpawnedDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FWaveSpawnedDelegate, bool, ManualWave, AActor*, Instigator);

