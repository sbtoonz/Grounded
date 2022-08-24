#pragma once
#include "CoreMinimal.h"
#include "EOnlineUserPrivilegeDenyReason.h"
#include "BlueprintOnlineCheckUserPrivilegeResultDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBlueprintOnlineCheckUserPrivilegeResultDelegate, bool, bGranted, EOnlineUserPrivilegeDenyReason, DenyReason);

