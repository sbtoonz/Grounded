#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIOnlineSubsystemUtils -ObjectName=Name_NetCrc -FallbackName=Name_NetCrc
#include "TechUnlockData.generated.h"

USTRUCT(BlueprintType)
struct FTechUnlockData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName_NetCrc TechTreeNodeRowName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 PointsAllocated;
    
    MAINE_API FTechUnlockData();
};

