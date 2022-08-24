#pragma once
#include "CoreMinimal.h"
#include "ETextDisplayType.h"
#include "BaseSettingsWidget.h"
#include "OnValueChangedDelegate.h"
#include "LabledSliderWidget.generated.h"

class UTextBlock;
class USlider;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API ULabledSliderWidget : public UBaseSettingsWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnValueChanged OnValueChangedEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* ValueTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USlider* Slider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ApplyImmediately;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StepSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETextDisplayType TextDisplayType;
    
public:
    ULabledSliderWidget();
protected:
    UFUNCTION(BlueprintCallable)
    float ValueToNormalized(float Value) const;
    
public:
    UFUNCTION(BlueprintCallable)
    void OnSliderValueChanged(float ChangedValue);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSliderMouseCaptureEnd();
    
    UFUNCTION(BlueprintCallable)
    float NormalizedToValue(float Normalized) const;
    
    UFUNCTION(BlueprintCallable)
    void HandleSliderControllerCaptureEnd();
    
    UFUNCTION(BlueprintCallable)
    void HandleSliderControllerCaptureBegin();
    
};

