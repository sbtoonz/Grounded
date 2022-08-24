#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "WaveSpawn.h"
#include "WaveSpawnFaction.generated.h"

USTRUCT(BlueprintType)
struct FWaveSpawnFaction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag FactionTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWaveSpawn> Spawns;
    
    MAINE_API FWaveSpawnFaction();
};

