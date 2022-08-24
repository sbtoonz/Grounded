#pragma once
#include "CoreMinimal.h"
#include "OnBurgleQuestStartedDelegateDelegate.generated.h"

class UBurgleQuestInstance;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBurgleQuestStartedDelegate, UBurgleQuestInstance*, Quest);

