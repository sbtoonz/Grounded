#pragma once
#include "CoreMinimal.h"
#include "Building.h"
#include "WidgetBuilding.generated.h"

class UWidgetInteractComponent;

UCLASS(Abstract)
class MAINE_API AWidgetBuilding : public ABuilding {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UWidgetInteractComponent* WidgetInteractionComponent;
    
public:
    AWidgetBuilding();
};

