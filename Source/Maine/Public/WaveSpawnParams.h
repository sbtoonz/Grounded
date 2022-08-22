#pragma once
#include "CoreMinimal.h"
#include "WaveSpawnParams.generated.h"

USTRUCT()
struct FWaveSpawnParams {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float SpawnChance;
    
    UPROPERTY(EditDefaultsOnly)
    int32 Heat;
    
    MAINE_API FWaveSpawnParams();
};

