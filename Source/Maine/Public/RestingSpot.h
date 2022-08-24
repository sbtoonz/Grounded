#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "WidgetBuilding.h"
#include "RestingSpot.generated.h"

UCLASS(Abstract, Blueprintable)
class MAINE_API ARestingSpot : public AWidgetBuilding {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> RestStatusEffects;
    
public:
    ARestingSpot();
};

