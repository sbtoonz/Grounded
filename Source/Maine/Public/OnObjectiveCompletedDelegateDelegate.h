#pragma once
#include "CoreMinimal.h"
#include "OnObjectiveCompletedDelegateDelegate.generated.h"

class UQuest;
class UObjective;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnObjectiveCompletedDelegate, UQuest*, QuestData, UObjective*, ObjectiveData);

