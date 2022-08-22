#pragma once
#include "CoreMinimal.h"
#include "OnScanTargetChangedDelegate.generated.h"

class ASurvivalCharacter;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnScanTargetChanged, ASurvivalCharacter*, TargetCharacter);

