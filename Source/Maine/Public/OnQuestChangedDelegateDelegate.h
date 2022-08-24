#pragma once
#include "CoreMinimal.h"
#include "OnQuestChangedDelegateDelegate.generated.h"

class UQuest;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnQuestChangedDelegate, UQuest*, QuestData);

