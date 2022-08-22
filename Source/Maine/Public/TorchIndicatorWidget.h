#pragma once
#include "CoreMinimal.h"
#include "GameUserWidget.h"
#include "TorchIndicatorWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class MAINE_API UTorchIndicatorWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
    UTorchIndicatorWidget();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnTorchPercentChanged(float TorchPercent);
    
    UFUNCTION()
    void OnItemPowerStateChangedImpl(bool bIsPowerOn);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnItemPowerStateChanged(bool bIsPowerOn);
    
};

