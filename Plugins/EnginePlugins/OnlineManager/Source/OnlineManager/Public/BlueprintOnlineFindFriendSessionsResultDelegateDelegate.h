#pragma once
#include "CoreMinimal.h"
#include "FindSessionsCallbackProxy.h"
#include "BlueprintOnlineFindFriendSessionsResultDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBlueprintOnlineFindFriendSessionsResultDelegate, const TArray<FBlueprintSessionResult>&, Results);

