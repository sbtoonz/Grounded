#pragma once
#include "CoreMinimal.h"
#include "FindSessionsCallbackProxy.h"
#include "OnAcceptOnlineInviteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAcceptOnlineInvite, FBlueprintSessionResult, Result);

