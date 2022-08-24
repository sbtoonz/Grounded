#pragma once
#include "CoreMinimal.h"
#include "OnMarkerAddRemoveDelegate.generated.h"

class UHUDMarkerData;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMarkerAddRemove, UHUDMarkerData*, MarkerData);

