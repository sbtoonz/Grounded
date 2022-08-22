#pragma once
#include "CoreMinimal.h"
#include "MapComponentDelegateDelegate.generated.h"

class UMapComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMapComponentDelegate, UMapComponent*, Sender);

