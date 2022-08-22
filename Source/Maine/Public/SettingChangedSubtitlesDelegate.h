#pragma once
#include "CoreMinimal.h"
#include "ESubtitleVerbositySettings.h"
#include "SettingChangedSubtitlesDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSettingChangedSubtitles, ESubtitleVerbositySettings, NewValue);

