#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "WaveCompositionData.generated.h"

USTRUCT(BlueprintType)
struct FWaveCompositionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag FactionTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpawnCount;
    
    MAINE_API FWaveCompositionData();
};

