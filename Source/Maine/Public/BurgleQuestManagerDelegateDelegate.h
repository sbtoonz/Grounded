#pragma once
#include "CoreMinimal.h"
#include "BurgleQuestManagerDelegateDelegate.generated.h"

class UBurgleQuestManagerComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBurgleQuestManagerDelegate, UBurgleQuestManagerComponent*, Sender);

