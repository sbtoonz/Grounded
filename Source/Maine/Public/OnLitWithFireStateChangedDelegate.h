#pragma once
#include "CoreMinimal.h"
#include "OnLitWithFireStateChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLitWithFireStateChanged, bool, IsLit);

