#pragma once
#include "CoreMinimal.h"
#include "KillUniqueOptionCompletedDelegateDelegate.generated.h"

class ABurgleQuestKillUniqueOptionActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FKillUniqueOptionCompletedDelegate, ABurgleQuestKillUniqueOptionActor*, Sender);

