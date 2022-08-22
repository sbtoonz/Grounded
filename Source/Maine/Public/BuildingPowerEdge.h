#pragma once
#include "CoreMinimal.h"
#include "BuildingPowerEdge.generated.h"

USTRUCT()
struct FBuildingPowerEdge {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 NodeA;
    
    UPROPERTY()
    int32 NodeB;
    
    UPROPERTY()
    int32 NetworkIdA;
    
    UPROPERTY()
    int32 NetworkIdB;
    
    MAINE_API FBuildingPowerEdge();
};

