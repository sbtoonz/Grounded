#pragma once
#include "CoreMinimal.h"
#include "FragileChangedDelegateDelegate.generated.h"

class UHealthComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFragileChangedDelegate, UHealthComponent*, Sender, bool, bIsFragile);

