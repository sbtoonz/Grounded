#pragma once
#include "CoreMinimal.h"
#include "SettingChangedFloatDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSettingChangedFloat, float, NewValue);

