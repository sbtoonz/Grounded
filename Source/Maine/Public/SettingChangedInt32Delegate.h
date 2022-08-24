#pragma once
#include "CoreMinimal.h"
#include "SettingChangedInt32Delegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSettingChangedInt32, int32, NewValue);

