#pragma once
#include "CoreMinimal.h"
#include "BuildingPowerNodeList.generated.h"

USTRUCT(BlueprintType)
struct FBuildingPowerNodeList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Nodes;
    
    MAINE_API FBuildingPowerNodeList();
};

