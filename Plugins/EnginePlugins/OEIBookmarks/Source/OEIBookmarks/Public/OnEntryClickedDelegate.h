#pragma once
#include "CoreMinimal.h"
#include "OnEntryClickedDelegate.generated.h"

class UOEIBookmarkEntryBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnEntryClicked, UOEIBookmarkEntryBase*, Entry);

