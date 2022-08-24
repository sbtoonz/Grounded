#pragma once
#include "CoreMinimal.h"
#include "OnWaveSpawnChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWaveSpawnChanged, int32, WaveSpawnID);

