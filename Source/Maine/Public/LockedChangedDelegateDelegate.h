#pragma once
#include "CoreMinimal.h"
#include "LockedChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLockedChangedDelegate, bool, IsLocked);

