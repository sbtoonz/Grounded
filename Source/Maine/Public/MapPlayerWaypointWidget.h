#pragma once
#include "CoreMinimal.h"
#include "MapMarkerWidget.h"
#include "MapPlayerWaypointWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API UMapPlayerWaypointWidget : public UMapMarkerWidget {
    GENERATED_BODY()
public:
    UMapPlayerWaypointWidget();
};

