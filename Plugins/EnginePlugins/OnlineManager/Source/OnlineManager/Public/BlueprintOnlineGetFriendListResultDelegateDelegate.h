#pragma once
#include "CoreMinimal.h"
#include "BlueprintFriendResult.h"
#include "BlueprintOnlineGetFriendListResultDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBlueprintOnlineGetFriendListResultDelegate, const TArray<FBlueprintFriendResult>&, Results);

