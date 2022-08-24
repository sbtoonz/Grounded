#pragma once
#include "CoreMinimal.h"
#include "EColorBlindModeSettings.h"
#include "SettingChangedColorBlindDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSettingChangedColorBlind, EColorBlindModeSettings, NewValue);

