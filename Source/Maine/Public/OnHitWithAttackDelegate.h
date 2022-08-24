#pragma once
#include "CoreMinimal.h"
#include "DamageInfo.h"
#include "OnHitWithAttackDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHitWithAttack, const FDamageInfo&, DamageInfo);

