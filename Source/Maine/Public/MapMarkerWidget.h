#pragma once
#include "CoreMinimal.h"
#include "BaseMapEntryWidget.h"
#include "MapMarkerWidget.generated.h"

class UMapPanelWidget;
class UHUDMarkerData;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API UMapMarkerWidget : public UBaseMapEntryWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UMapPanelWidget* MapOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHUDMarkerData* HUDMarkerData;
    
public:
    UMapMarkerWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void HandleHUDMarkerDataChanged();
    
};

