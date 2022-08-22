#pragma once
#include "CoreMinimal.h"
#include "OnDefensePointActiveChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDefensePointActiveChanged, bool, bIsActive);

