#pragma once
#include "CoreMinimal.h"
#include "WidgetBuilding.h"
#include "ResourceScannerBuilding.generated.h"

class UWidgetInteractComponent;
class AActor;

UCLASS(Abstract)
class MAINE_API AResourceScannerBuilding : public AWidgetBuilding {
    GENERATED_BODY()
public:
    AResourceScannerBuilding();
private:
    UFUNCTION()
    void HandleSingleUseInteractingActorChanged(UWidgetInteractComponent* Sender, AActor* InteractingActor);
    
};

