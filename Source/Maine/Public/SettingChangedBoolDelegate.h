#pragma once
#include "CoreMinimal.h"
#include "SettingChangedBoolDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSettingChangedBool, bool, NewValue);

