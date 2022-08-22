#pragma once
#include "CoreMinimal.h"
#include "WidgetBuilding.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "RestingSpot.generated.h"

UCLASS(Abstract)
class MAINE_API ARestingSpot : public AWidgetBuilding {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<FDataTableRowHandle> RestStatusEffects;
    
public:
    ARestingSpot();
};

