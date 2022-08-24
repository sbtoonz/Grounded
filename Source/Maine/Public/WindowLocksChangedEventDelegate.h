#pragma once
#include "CoreMinimal.h"
#include "WindowLocksChangedEventDelegate.generated.h"

class UInterfaceManagerComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWindowLocksChangedEvent, UInterfaceManagerComponent*, Sender);

