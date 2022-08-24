#pragma once
#include "CoreMinimal.h"
#include "MapPanelPannedDelegateDelegate.generated.h"

class UMapPanelWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMapPanelPannedDelegate, UMapPanelWidget*, Sender);

