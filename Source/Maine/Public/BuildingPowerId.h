#pragma once
#include "CoreMinimal.h"
#include "BuildingPowerId.generated.h"

USTRUCT(BlueprintType)
struct FBuildingPowerId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NetworkId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NodeId;
    
    MAINE_API FBuildingPowerId();
};

