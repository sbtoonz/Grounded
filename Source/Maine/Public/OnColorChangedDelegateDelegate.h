#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnColorChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnColorChangedDelegate, FColor, NewColor);

