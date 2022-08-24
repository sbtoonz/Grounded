#pragma once
#include "CoreMinimal.h"
#include "BlueprintUserOnlineAccountResult.h"
#include "BlueprintOnlineGetUserAccountsResultDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBlueprintOnlineGetUserAccountsResultDelegate, const TArray<FBlueprintUserOnlineAccountResult>&, Results);

