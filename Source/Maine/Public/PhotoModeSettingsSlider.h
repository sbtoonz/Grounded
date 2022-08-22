#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIPhotoMode -ObjectName=PhotoModeSliderBase -FallbackName=PhotoModeSliderBase
#include "PhotoModeSettingsSlider.generated.h"

class USoundBase;

UCLASS()
class MAINE_API UPhotoModeSettingsSlider : public UPhotoModeSliderBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* HoverFocusReceivedSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* CaptureReceivedSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* CaptureLostSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* ValueChangedSound;
    
public:
    UPhotoModeSettingsSlider();
};

