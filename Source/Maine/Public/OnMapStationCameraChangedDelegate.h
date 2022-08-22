#pragma once
#include "CoreMinimal.h"
#include "OnMapStationCameraChangedDelegate.generated.h"

class AMapStation;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMapStationCameraChanged, AMapStation*, MapStation, int32, CameraIndex);

