#pragma once
#include "CoreMinimal.h"
#include "StatusEffectDelegateDelegate.generated.h"

class AActor;
class UStatusEffect;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FStatusEffectDelegate, AActor*, Owner, UStatusEffect*, StatusEffect);

