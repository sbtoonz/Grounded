#pragma once
#include "CoreMinimal.h"
#include "OnCheckIfNeedsSaveConversionCompleteDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCheckIfNeedsSaveConversionComplete, bool, RequiresLoad);

