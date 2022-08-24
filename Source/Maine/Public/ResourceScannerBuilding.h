#pragma once
#include "CoreMinimal.h"
#include "WidgetBuilding.h"
#include "ResourceScannerBuilding.generated.h"

class UWidgetInteractComponent;
class AActor;

UCLASS(Abstract, Blueprintable)
class MAINE_API AResourceScannerBuilding : public AWidgetBuilding {
    GENERATED_BODY()
public:
    AResourceScannerBuilding();
private:
    UFUNCTION(BlueprintCallable)
    void HandleSingleUseInteractingActorChanged(UWidgetInteractComponent* Sender, AActor* InteractingActor);
    
};

