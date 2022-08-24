#pragma once
#include "CoreMinimal.h"
#include "PhotoModeSettingsBase.h"
#include "MainePhotoModeSettings.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API UMainePhotoModeSettings : public UPhotoModeSettingsBase {
    GENERATED_BODY()
public:
    UMainePhotoModeSettings();
};

