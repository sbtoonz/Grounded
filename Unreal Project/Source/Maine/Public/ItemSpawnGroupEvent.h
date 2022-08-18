#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESpawnIntervalBehavior.h"
#include "EItemSpawnEventType.h"
#include "UObject/NoExportTypes.h"
#include "ItemSpawnGroupEvent.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FItemSpawnGroupEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    EItemSpawnEventType EventType;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    ESpawnIntervalBehavior When;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float WhenValue;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    uint8 bAllowQueueing: 1;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float EventPercentageChance;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FFloatRange AffectedPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FInt32Range AffectedCount;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FFloatRange MaxPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FInt32Range MaxCount;
    
    FItemSpawnGroupEvent();
};

