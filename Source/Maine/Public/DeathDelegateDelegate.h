#pragma once
#include "CoreMinimal.h"
#include "DamageInfo.h"
#include "DeathDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDeathDelegate, const FDamageInfo&, DamageInfo);

