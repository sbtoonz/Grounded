#pragma once
#include "CoreMinimal.h"
#include "OnUserInterfaceInitializedDelegate.generated.h"

class UCustomPropertiesWindowWidget;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUserInterfaceInitialized, UCustomPropertiesWindowWidget*, PropertiesWidget);

