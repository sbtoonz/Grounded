#pragma once
#include "CoreMinimal.h"
#include "DamageInfo.h"
#include "DamagedDelegateDelegate.generated.h"

class AController;
class UBaseLODActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FDamagedDelegate, float, Damage, const FDamageInfo&, DamageInfo, AController*, InstigatedBy, UBaseLODActor*, DamageCauser, bool, IsKillingBlow);

