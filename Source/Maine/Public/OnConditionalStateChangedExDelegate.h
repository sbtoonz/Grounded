#pragma once
#include "CoreMinimal.h"
#include "OnConditionalStateChangedExDelegate.generated.h"

class UConditionalToggleComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnConditionalStateChangedEx, UConditionalToggleComponent*, Component, bool, bIsActive);

