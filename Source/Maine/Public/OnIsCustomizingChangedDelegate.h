#pragma once
#include "CoreMinimal.h"
#include "OnIsCustomizingChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnIsCustomizingChanged, bool, IsCustomizing);

