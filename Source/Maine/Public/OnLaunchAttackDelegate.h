#pragma once
#include "CoreMinimal.h"
#include "OnLaunchAttackDelegate.generated.h"

class UAttack;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLaunchAttack, UAttack*, Attack);

