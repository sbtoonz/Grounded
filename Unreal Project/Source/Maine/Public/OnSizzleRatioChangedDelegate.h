#pragma once
#include "CoreMinimal.h"
#include "OnSizzleRatioChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSizzleRatioChanged, float, NewRatio, bool, IsLocalPlayer);

