#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LiteBuildingGrid.h"
#include "LiteBuildingGridObject.generated.h"

UCLASS(Blueprintable)
class ULiteBuildingGridObject : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLiteBuildingGrid Grid;
    
    ULiteBuildingGridObject();
};

