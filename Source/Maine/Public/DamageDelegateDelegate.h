#pragma once
#include "CoreMinimal.h"
#include "DamageInfo.h"
#include "DamageDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDamageDelegate, AActor*, DamagedActor, const FDamageInfo&, DamageInfo);

