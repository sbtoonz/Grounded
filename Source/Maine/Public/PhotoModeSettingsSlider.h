#pragma once
#include "CoreMinimal.h"
#include "PhotoModeSliderBase.h"
#include "PhotoModeSettingsSlider.generated.h"

class USoundBase;

UCLASS(Blueprintable)
class MAINE_API UPhotoModeSettingsSlider : public UPhotoModeSliderBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* HoverFocusReceivedSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* CaptureReceivedSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* CaptureLostSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* ValueChangedSound;
    
public:
    UPhotoModeSettingsSlider();
};

