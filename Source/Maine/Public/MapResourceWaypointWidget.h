#pragma once
#include "CoreMinimal.h"
#include "MapMarkerWidget.h"
#include "MapResourceWaypointWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API UMapResourceWaypointWidget : public UMapMarkerWidget {
    GENERATED_BODY()
public:
    UMapResourceWaypointWidget();
};

