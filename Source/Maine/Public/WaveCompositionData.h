#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "WaveCompositionData.generated.h"

USTRUCT(BlueprintType)
struct FWaveCompositionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FGameplayTag FactionTag;
    
    UPROPERTY(BlueprintReadOnly)
    int32 SpawnCount;
    
    MAINE_API FWaveCompositionData();
};

