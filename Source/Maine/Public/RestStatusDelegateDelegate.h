#pragma once
#include "CoreMinimal.h"
#include "RestStatusDelegateDelegate.generated.h"

class ASurvivalPlayerCharacter;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRestStatusDelegate, const TArray<ASurvivalPlayerCharacter*>&, RestingPlayers);

