#pragma once
#include "CoreMinimal.h"
#include "EOnlinePermissionDenyReason.h"
#include "BlueprintOnlineCheckUserPermissionResultDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBlueprintOnlineCheckUserPermissionResultDelegate, bool, bGranted, EOnlinePermissionDenyReason, DenyReason);

