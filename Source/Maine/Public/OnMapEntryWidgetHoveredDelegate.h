#pragma once
#include "CoreMinimal.h"
#include "OnMapEntryWidgetHoveredDelegate.generated.h"

class UBaseMapEntryWidget;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMapEntryWidgetHovered, UBaseMapEntryWidget*, EntryWidget);

