#pragma once
#include "CoreMinimal.h"
#include "TrapArmedDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTrapArmedDelegate, bool, TrapArmed);

