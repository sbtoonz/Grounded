#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ResearchRequestDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FResearchRequestDelegate, FDataTableRowHandle, ItemHandle, bool, bSuccess);

