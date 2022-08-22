#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "WaveSpawn.h"
#include "WaveSpawnFaction.generated.h"

USTRUCT(BlueprintType)
struct FWaveSpawnFaction {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag FactionTag;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FWaveSpawn> Spawns;
    
    MAINE_API FWaveSpawnFaction();
};

