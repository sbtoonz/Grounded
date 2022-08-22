#pragma once
#include "CoreMinimal.h"
#include "WaveCompositionData.h"
#include "OnWaveCompositionChangedDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWaveCompositionChangedDelegate, const TArray<FWaveCompositionData>&, WaveComposition);

