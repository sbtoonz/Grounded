#pragma once
#include "CoreMinimal.h"
#include "ECameraDisplayMode.h"
#include "CameraDisplayModeChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCameraDisplayModeChanged, ECameraDisplayMode, DisplayMode);

