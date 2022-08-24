#pragma once
#include "CoreMinimal.h"
#include "OnBurgleQuestCompleteDelegateDelegate.generated.h"

class UBurgleQuestInstance;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBurgleQuestCompleteDelegate, UBurgleQuestInstance*, Quest);

