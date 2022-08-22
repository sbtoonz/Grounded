#pragma once
#include "CoreMinimal.h"
#include "EActiveUserChangeType.h"
#include "OnActiveUserChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnActiveUserChanged, EActiveUserChangeType, ChangeType);

