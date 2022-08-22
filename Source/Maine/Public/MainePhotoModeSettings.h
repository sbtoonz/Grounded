#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIPhotoMode -ObjectName=PhotoModeSettingsBase -FallbackName=PhotoModeSettingsBase
#include "MainePhotoModeSettings.generated.h"

UCLASS(Abstract, EditInlineNew)
class MAINE_API UMainePhotoModeSettings : public UPhotoModeSettingsBase {
    GENERATED_BODY()
public:
    UMainePhotoModeSettings();
};

