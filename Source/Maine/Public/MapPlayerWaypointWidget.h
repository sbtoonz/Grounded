#pragma once
#include "CoreMinimal.h"
#include "MapMarkerWidget.h"
#include "MapPlayerWaypointWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class MAINE_API UMapPlayerWaypointWidget : public UMapMarkerWidget {
    GENERATED_BODY()
public:
    UMapPlayerWaypointWidget();
};

