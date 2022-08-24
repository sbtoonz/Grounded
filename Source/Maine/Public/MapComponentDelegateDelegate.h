#pragma once
#include "CoreMinimal.h"
#include "MapComponentDelegateDelegate.generated.h"

class UMapComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMapComponentDelegate, UMapComponent*, Sender);

