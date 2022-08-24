#pragma once
#include "CoreMinimal.h"
#include "Name_NetCrc.h"
#include "TechUnlockData.generated.h"

USTRUCT(BlueprintType)
struct FTechUnlockData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName_NetCrc TechTreeNodeRowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PointsAllocated;
    
    MAINE_API FTechUnlockData();
};

