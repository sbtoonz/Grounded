#pragma once
#include "CoreMinimal.h"
#include "Building.h"
#include "WidgetBuilding.generated.h"

class UWidgetInteractComponent;

UCLASS(Abstract, Blueprintable)
class MAINE_API AWidgetBuilding : public ABuilding {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWidgetInteractComponent* WidgetInteractionComponent;
    
public:
    AWidgetBuilding();
};

