#pragma once
#include "CoreMinimal.h"
#include "BuildingPowerVertex.h"
#include "BuildingPowerNetwork.generated.h"

USTRUCT(BlueprintType)
struct FBuildingPowerNetwork {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 NetworkId;
    
    UPROPERTY()
    TMap<int32, FBuildingPowerVertex> GraphVertices;
    
    UPROPERTY()
    TSet<int32> ReachableNetworks;
    
    UPROPERTY()
    TSet<int32> AccessibleNetworks;
    
    UPROPERTY()
    bool bIsSwitch;
    
    UPROPERTY()
    bool bIsSwitchActive;
    
    UPROPERTY()
    float PowerOutput;
    
    MAINE_API FBuildingPowerNetwork();
};

