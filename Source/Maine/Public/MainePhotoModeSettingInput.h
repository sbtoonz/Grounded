#pragma once
#include "CoreMinimal.h"
#include "PhotoModeSettingWidget.h"
#include "MainePhotoModeSettingInput.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API UMainePhotoModeSettingInput : public UPhotoModeSettingWidget {
    GENERATED_BODY()
public:
    UMainePhotoModeSettingInput();
    UFUNCTION(BlueprintCallable)
    void SetPhotoModeTimeOfDay(float Time);
    
    UFUNCTION(BlueprintCallable)
    void SetAzimuthOffset(float Value);
    
};

