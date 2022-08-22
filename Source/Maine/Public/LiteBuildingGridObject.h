#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "LiteBuildingGrid.h"
#include "LiteBuildingGridObject.generated.h"

UCLASS()
class ULiteBuildingGridObject : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    FLiteBuildingGrid Grid;
    
    ULiteBuildingGridObject();
};

