#pragma once
#include "CoreMinimal.h"
#include "OnBurgleObjectiveCompletedDelegateDelegate.generated.h"

class UBurgleQuestInstance;
class UBaseObjective;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnBurgleObjectiveCompletedDelegate, UBurgleQuestInstance*, Quest, UBaseObjective*, ObjectiveData);

