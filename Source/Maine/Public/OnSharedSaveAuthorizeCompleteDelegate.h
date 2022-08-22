#pragma once
#include "CoreMinimal.h"
#include "OnSharedSaveAuthorizeCompleteDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSharedSaveAuthorizeComplete, const FString&, ID, const FString&, DisplayName);

