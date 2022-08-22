#pragma once
#include "CoreMinimal.h"
#include "OnClosestValidTransmitterChangedDelegate.generated.h"

class UTransmitterComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnClosestValidTransmitterChanged, UTransmitterComponent*, NewClosestTransmitter);

