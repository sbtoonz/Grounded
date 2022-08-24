#pragma once
#include "CoreMinimal.h"
#include "Components/Slider.h"
#include "UObject/NoExportTypes.h"
#include "PhotoModeSliderBase.generated.h"

UCLASS(Blueprintable)
class OEIPHOTOMODE_API UPhotoModeSliderBase : public USlider {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DefaultSliderColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DefaultBarColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor CapturedSliderColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor CapturedBarColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor FocusReceivedSliderColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor FocusReceivedBarColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DisabledSliderColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DisabledBarColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Focused;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreviousValue;
    
public:
    UPhotoModeSliderBase();
protected:
    UFUNCTION(BlueprintCallable)
    void OnFocusChanged(bool HasFocus);
    
    UFUNCTION(BlueprintCallable)
    void OnCaptureEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnCaptureBegin();
    
    UFUNCTION(BlueprintCallable)
    void HandleValueChanged(float NewValue);
    
};

