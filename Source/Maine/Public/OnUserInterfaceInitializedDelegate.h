#pragma once
#include "CoreMinimal.h"
#include "OnUserInterfaceInitializedDelegate.generated.h"

class UCustomPropertiesWindowWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUserInterfaceInitialized, UCustomPropertiesWindowWidget*, PropertiesWidget);

