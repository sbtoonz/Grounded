#pragma once
#include "CoreMinimal.h"
#include "AnyControlMapping.h"
#include "OnControlMappingChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnControlMappingChanged, FAnyControlMapping, BoundControl);

