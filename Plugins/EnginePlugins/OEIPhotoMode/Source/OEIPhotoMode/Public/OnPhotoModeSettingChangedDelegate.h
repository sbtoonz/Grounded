#pragma once
#include "CoreMinimal.h"
#include "OnPhotoModeSettingChangedDelegate.generated.h"

class UPhotoModeSettingWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPhotoModeSettingChanged, UPhotoModeSettingWidget*, ChangedSetting);

