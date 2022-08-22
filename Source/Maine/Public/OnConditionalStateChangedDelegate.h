#pragma once
#include "CoreMinimal.h"
#include "OnConditionalStateChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnConditionalStateChanged, bool, bIsActive);

