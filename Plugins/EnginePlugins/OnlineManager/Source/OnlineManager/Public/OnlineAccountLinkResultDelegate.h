#pragma once
#include "CoreMinimal.h"
#include "OnlineAccountLinkResultDelegate.generated.h"

class APlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnlineAccountLinkResult, APlayerController*, PlayerController);

