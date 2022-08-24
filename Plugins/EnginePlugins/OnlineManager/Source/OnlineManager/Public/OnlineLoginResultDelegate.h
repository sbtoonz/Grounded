#pragma once
#include "CoreMinimal.h"
#include "OnlineLoginResultDelegate.generated.h"

class APlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnlineLoginResult, APlayerController*, PlayerController);

