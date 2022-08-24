#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerInput.h"
#include "InputAxisKeyMappingDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInputAxisKeyMappingDelegate, const FInputAxisKeyMapping&, Value);

