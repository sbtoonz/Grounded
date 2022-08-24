#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "OnUseItemDelegateDelegate.generated.h"

class ASurvivalCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnUseItemDelegate, ASurvivalCharacter*, User, FDataTableRowHandle, ItemData);

