#pragma once
#include "CoreMinimal.h"
#include "ETextDisplayType.h"
#include "BaseSettingsWidget.h"
#include "OnValueChangedDelegate.h"
#include "LabledSliderWidget.generated.h"

class UTextBlock;
class USlider;

UCLASS(Abstract, EditInlineNew)
class MAINE_API ULabledSliderWidget : public UBaseSettingsWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnValueChanged OnValueChangedEvent;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* ValueTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Export)
    USlider* Slider;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ApplyImmediately;
    
    UPROPERTY(EditAnywhere)
    float MinValue;
    
    UPROPERTY(EditAnywhere)
    float MaxValue;
    
    UPROPERTY(EditAnywhere)
    float StepSize;
    
    UPROPERTY(EditAnywhere)
    ETextDisplayType TextDisplayType;
    
public:
    ULabledSliderWidget();
protected:
    UFUNCTION()
    float ValueToNormalized(float Value) const;
    
public:
    UFUNCTION()
    void OnSliderValueChanged(float ChangedValue);
    
protected:
    UFUNCTION()
    void OnSliderMouseCaptureEnd();
    
    UFUNCTION()
    float NormalizedToValue(float Normalized) const;
    
    UFUNCTION()
    void HandleSliderControllerCaptureEnd();
    
    UFUNCTION()
    void HandleSliderControllerCaptureBegin();
    
};

