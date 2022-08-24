#pragma once
#include "CoreMinimal.h"
#include "OnStatusEffectTimerResetDelegate.generated.h"

class UStatusEffect;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStatusEffectTimerReset, UStatusEffect*, StatusEffect);

