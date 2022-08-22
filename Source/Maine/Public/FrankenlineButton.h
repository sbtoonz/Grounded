#pragma once
#include "CoreMinimal.h"
#include "FrankenlineControl.h"
#include "FrankenlineButton.generated.h"

class AActor;

UCLASS()
class MAINE_API AFrankenlineButton : public AFrankenlineControl {
    GENERATED_BODY()
public:
    AFrankenlineButton();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void HandleButtonPressed(AActor* InstigatedBy);
    
};

