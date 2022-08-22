#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIPhotoMode -ObjectName=PhotoModeSettingWidget -FallbackName=PhotoModeSettingWidget
#include "MainePhotoModeSettingInput.generated.h"

UCLASS(Abstract, EditInlineNew)
class MAINE_API UMainePhotoModeSettingInput : public UPhotoModeSettingWidget {
    GENERATED_BODY()
public:
    UMainePhotoModeSettingInput();
    UFUNCTION()
    void SetPhotoModeTimeOfDay(float Time);
    
    UFUNCTION()
    void SetAzimuthOffset(float Value);
    
};

