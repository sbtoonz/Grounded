#pragma once
#include "CoreMinimal.h"
#include "AttackDelegateDelegate.generated.h"

class UAttack;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAttackDelegate, UAttack*, Attack);

