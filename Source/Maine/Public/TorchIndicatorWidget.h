#pragma once
#include "CoreMinimal.h"
#include "GameUserWidget.h"
#include "TorchIndicatorWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API UTorchIndicatorWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
    UTorchIndicatorWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTorchPercentChanged(float TorchPercent);
    
    UFUNCTION(BlueprintCallable)
    void OnItemPowerStateChangedImpl(bool bIsPowerOn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemPowerStateChanged(bool bIsPowerOn);
    
};

