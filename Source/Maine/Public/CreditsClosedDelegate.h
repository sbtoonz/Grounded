#pragma once
#include "CoreMinimal.h"
#include "CreditsClosedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCreditsClosed, bool, bForced);

