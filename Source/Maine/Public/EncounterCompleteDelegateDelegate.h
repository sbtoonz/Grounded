#pragma once
#include "CoreMinimal.h"
#include "EncounterCompleteDelegateDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEncounterCompleteDelegate, AActor*, ActorDamageSource);

