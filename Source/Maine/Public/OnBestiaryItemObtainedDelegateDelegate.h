#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "OnBestiaryItemObtainedDelegateDelegate.generated.h"

class ASurvivalPlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnBestiaryItemObtainedDelegate, FDataTableRowHandle, KeyItemRowHandle, ASurvivalPlayerState*, AcquirerPlayerState);

