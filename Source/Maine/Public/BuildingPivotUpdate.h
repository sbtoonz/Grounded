#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "BuildingPivotUpdate.generated.h"

class ABuilding;

USTRUCT(BlueprintType)
struct FBuildingPivotUpdate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 BuildingVersion;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<ABuilding> BuildingClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FTransform PivotChange;
    
    MAINE_API FBuildingPivotUpdate();
};

