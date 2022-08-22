#pragma once
#include "CoreMinimal.h"
#include "DefensePointCompleteDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDefensePointCompleteDelegate, bool, bSuccess);

