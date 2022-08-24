#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HandleAttackEffectsDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHandleAttackEffectsDelegate, FDataTableRowHandle, AttackDataRowHandle);

