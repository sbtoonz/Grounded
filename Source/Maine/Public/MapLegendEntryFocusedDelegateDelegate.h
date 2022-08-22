#pragma once
#include "CoreMinimal.h"
#include "MapLegendEntryFocusedDelegateDelegate.generated.h"

class UMapLegendEntryWidget;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMapLegendEntryFocusedDelegate, UMapLegendEntryWidget*, Sender);

