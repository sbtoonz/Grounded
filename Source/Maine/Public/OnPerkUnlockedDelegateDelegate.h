#pragma once
#include "CoreMinimal.h"
#include "OnPerkUnlockedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPerkUnlockedDelegate, FName, PerkName, int32, PerkTier);

