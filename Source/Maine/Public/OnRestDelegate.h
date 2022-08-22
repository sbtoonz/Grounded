#pragma once
#include "CoreMinimal.h"
#include "OnRestDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRest, float, RestDuration);

