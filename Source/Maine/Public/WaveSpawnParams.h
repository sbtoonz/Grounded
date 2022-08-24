#pragma once
#include "CoreMinimal.h"
#include "WaveSpawnParams.generated.h"

USTRUCT(BlueprintType)
struct FWaveSpawnParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Heat;
    
    MAINE_API FWaveSpawnParams();
};

