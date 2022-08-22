#pragma once
#include "CoreMinimal.h"
#include "BuildingPowerId.generated.h"

USTRUCT(BlueprintType)
struct FBuildingPowerId {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 NetworkId;
    
    UPROPERTY()
    int32 NodeId;
    
    MAINE_API FBuildingPowerId();
};

