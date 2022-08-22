#pragma once
#include "CoreMinimal.h"
#include "TrackedItemSpawnGroupEventRepData.generated.h"

USTRUCT(BlueprintType)
struct FTrackedItemSpawnGroupEventRepData {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint32 UniqueId;
    
    UPROPERTY()
    int32 EventIndex;
    
    UPROPERTY()
    int32 Seed;
    
    MAINE_API FTrackedItemSpawnGroupEventRepData();
};

