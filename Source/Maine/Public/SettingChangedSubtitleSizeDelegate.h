#pragma once
#include "CoreMinimal.h"
#include "ESubtitleSizeSettings.h"
#include "SettingChangedSubtitleSizeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSettingChangedSubtitleSize, ESubtitleSizeSettings, NewValue);

