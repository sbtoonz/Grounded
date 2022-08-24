#pragma once
#include "CoreMinimal.h"
#include "OnCustomPropertyValueChangedDelegate.generated.h"

class UCustomPropertiesWindowWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FOnCustomPropertyValueChanged, FName, PropertyName, float, FloatValue, int32, IntValue, bool, BoolValue, UCustomPropertiesWindowWidget*, PropertiesWidget);

