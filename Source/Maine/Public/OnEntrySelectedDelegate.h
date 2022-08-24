#pragma once
#include "CoreMinimal.h"
#include "EMapEntryType.h"
#include "OnEntrySelectedDelegate.generated.h"

class UBaseMapEntryWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnEntrySelected, UBaseMapEntryWidget*, EntryWidget, EMapEntryType, EntryType);

