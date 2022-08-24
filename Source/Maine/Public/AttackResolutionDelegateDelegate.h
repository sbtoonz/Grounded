#pragma once
#include "CoreMinimal.h"
#include "EAttackResolutionType.h"
#include "AttackResolutionDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAttackResolutionDelegate, EAttackResolutionType, AttackResolution);

