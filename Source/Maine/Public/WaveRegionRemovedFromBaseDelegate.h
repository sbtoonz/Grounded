#pragma once
#include "CoreMinimal.h"
#include "WaveRegionRemovedFromBaseDelegate.generated.h"

class AWaveSpawnRegionVolume;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FWaveRegionRemovedFromBase, int32, BaseIndex, AWaveSpawnRegionVolume*, Region);

