#pragma once
#include "CoreMinimal.h"
#include "OnAnyKeyPressedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAnyKeyPressed, int32, UserIndex);

