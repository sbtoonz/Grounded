#pragma once
#include "CoreMinimal.h"
#include "WindowClosedDelegateDelegate.generated.h"

class UWindowWidget;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWindowClosedDelegate, UWindowWidget*, Sender);

