#pragma once
#include "CoreMinimal.h"
#include "ESaveGameResult.h"
#include "ESaveGameType.h"
#include "OnSaveActionCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSaveActionComplete, ESaveGameResult, SaveResult, ESaveGameType, SaveGameType);

