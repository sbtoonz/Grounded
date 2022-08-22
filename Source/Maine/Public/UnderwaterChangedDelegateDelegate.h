#pragma once
#include "CoreMinimal.h"
#include "UnderwaterChangedDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUnderwaterChangedDelegate, bool, bIsUnderwater);

