#pragma once
#include "CoreMinimal.h"
#include "OnObjectiveActivatedDelegateDelegate.generated.h"

class UQuest;
class UObjective;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnObjectiveActivatedDelegate, UQuest*, QuestData, UObjective*, ObjectiveData);

