#pragma once
#include "CoreMinimal.h"
#include "BaseMapEntryWidget.h"
#include "MapPlayerWidget.generated.h"

class UHUDMarkerData;

UCLASS(Abstract, EditInlineNew)
class MAINE_API UMapPlayerWidget : public UBaseMapEntryWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    UHUDMarkerData* HUDMarkerData;
    
public:
    UMapPlayerWidget();
    UFUNCTION(BlueprintImplementableEvent)
    void SetPlayerRotation(float Angle);
    
};

