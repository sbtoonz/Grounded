#pragma once
#include "CoreMinimal.h"
#include "OnBeginHaulingDelegate.generated.h"

class UHaulingComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBeginHauling, UHaulingComponent*, Sender);

