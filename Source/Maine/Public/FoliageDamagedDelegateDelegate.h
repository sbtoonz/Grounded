#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DamageEvent -FallbackName=DamageEvent
#include "DamageInfo.h"
#include "FoliageDamagedDelegateDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FFoliageDamagedDelegate, AActor*, Sender, float, Damage, const FDamageEvent&, DamageEvent, FDamageInfo, DamageInfo);

