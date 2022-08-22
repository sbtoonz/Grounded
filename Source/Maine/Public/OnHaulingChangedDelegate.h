#pragma once
#include "CoreMinimal.h"
#include "OnHaulingChangedDelegate.generated.h"

class UHaulingComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHaulingChanged, UHaulingComponent*, Sender);

