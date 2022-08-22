#pragma once
#include "CoreMinimal.h"
#include "OnPlayerNameChangedDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerNameChangedDelegate, const FString&, NewName);

