#pragma once
#include "CoreMinimal.h"
#include "EGameInputType.h"
#include "OnGameInputTypeChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGameInputTypeChanged, EGameInputType, GameInputType);

