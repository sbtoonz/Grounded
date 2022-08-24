#pragma once
#include "CoreMinimal.h"
#include "TrackedItemSpawnGroupEventRepData.generated.h"

USTRUCT(BlueprintType)
struct FTrackedItemSpawnGroupEventRepData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 UniqueId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EventIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Seed;
    
    MAINE_API FTrackedItemSpawnGroupEventRepData();
};

