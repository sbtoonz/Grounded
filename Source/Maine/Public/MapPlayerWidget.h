#pragma once
#include "CoreMinimal.h"
#include "BaseMapEntryWidget.h"
#include "MapPlayerWidget.generated.h"

class UHUDMarkerData;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API UMapPlayerWidget : public UBaseMapEntryWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHUDMarkerData* HUDMarkerData;
    
public:
    UMapPlayerWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPlayerRotation(float Angle);
    
};

