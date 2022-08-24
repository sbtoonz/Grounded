#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "DamageInfo.h"
#include "FoliageDamagedDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FFoliageDamagedDelegate, AActor*, Sender, float, Damage, const FDamageEvent&, DamageEvent, FDamageInfo, DamageInfo);

