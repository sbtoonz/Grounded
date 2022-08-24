#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "KeyItemAddedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FKeyItemAddedDelegate, FDataTableRowHandle, ItemHandle, bool, IsNewItem);

