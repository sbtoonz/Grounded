#pragma once
#include "CoreMinimal.h"
#include "GameUserWidget.h"
#include "ThirstReadoutWidget.generated.h"

class USurvivalComponent;

UCLASS(Abstract, EditInlineNew)
class MAINE_API UThirstReadoutWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite)
    float LastPlayerThirst;
    
    UPROPERTY(BlueprintReadWrite)
    float CurrentDisplayedThirst;
    
    UPROPERTY(BlueprintReadOnly)
    float ThirstRatio;
    
public:
    UThirstReadoutWidget();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateThirstAnim();
    
    UFUNCTION()
    void CheckWaterChange(USurvivalComponent* Sender, float OldValue, float NewValue);
    
};

