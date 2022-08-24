#pragma once
#include "CoreMinimal.h"
#include "OnBurgleObjectiveUpdatedDelegateDelegate.generated.h"

class UBurgleQuestInstance;
class UBaseObjective;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnBurgleObjectiveUpdatedDelegate, UBurgleQuestInstance*, Quest, UBaseObjective*, ObjectiveData);

