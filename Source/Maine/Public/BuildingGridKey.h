#pragma once
#include "CoreMinimal.h"
#include "EBuildingGridSlot.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntVector -FallbackName=IntVector
#include "BuildingGridKey.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FBuildingGridKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FIntVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EBuildingGridSlot Slot;
    
    FBuildingGridKey();
};

