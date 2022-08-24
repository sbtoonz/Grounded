#pragma once
#include "CoreMinimal.h"
#include "BossCompleteDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBossCompleteDelegate, AActor*, ActorDamageSource);

