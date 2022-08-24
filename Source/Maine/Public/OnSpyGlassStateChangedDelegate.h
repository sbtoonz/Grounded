#pragma once
#include "CoreMinimal.h"
#include "OnSpyGlassStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSpyGlassStateChanged, bool, Enabled);

