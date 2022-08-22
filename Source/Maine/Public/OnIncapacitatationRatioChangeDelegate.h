#pragma once
#include "CoreMinimal.h"
#include "OnIncapacitatationRatioChangeDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnIncapacitatationRatioChange, float, NewRatio);

