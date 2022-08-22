#pragma once
#include "CoreMinimal.h"
#include "BaseMapEntryWidget.h"
#include "MapMarkerWidget.generated.h"

class UMapPanelWidget;
class UHUDMarkerData;

UCLASS(Abstract, EditInlineNew)
class MAINE_API UMapMarkerWidget : public UBaseMapEntryWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export, Transient)
    UMapPanelWidget* MapOwner;
    
    UPROPERTY(BlueprintReadWrite)
    UHUDMarkerData* HUDMarkerData;
    
public:
    UMapMarkerWidget();
protected:
    UFUNCTION()
    void HandleHUDMarkerDataChanged();
    
};

