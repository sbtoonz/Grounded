#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ItemDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FItemDelegate, FDataTableRowHandle, ItemRowHandle);

