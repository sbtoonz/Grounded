#pragma once
#include "CoreMinimal.h"
#include "OnCustomPropertyInputChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCustomPropertyInputChanged, FName, PropertyName, float, Value);

