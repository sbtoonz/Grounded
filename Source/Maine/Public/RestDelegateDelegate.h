#pragma once
#include "CoreMinimal.h"
#include "RestDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRestDelegate, float, RestDuration);

