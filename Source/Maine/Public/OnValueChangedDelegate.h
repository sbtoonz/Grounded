#pragma once
#include "CoreMinimal.h"
#include "OnValueChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnValueChanged, float, NewValue);

