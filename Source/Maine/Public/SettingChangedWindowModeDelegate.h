#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameUserSettings.h"
#include "SettingChangedWindowModeDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSettingChangedWindowMode, TEnumAsByte<EWindowMode::Type>, NewValue);

