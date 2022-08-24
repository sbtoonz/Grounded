#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "WaveSpawnFailedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWaveSpawnFailedDelegate, const TArray<FGameplayTag>&, FailedFactions);

