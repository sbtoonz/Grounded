#pragma once
#include "CoreMinimal.h"
#include "OnAssociationEnableChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAssociationEnableChanged, bool, bIsEnabled);

