#pragma once
#include "CoreMinimal.h"
#include "BaseMapEntryWidget.h"
#include "MapPOIWidget.generated.h"

class UPointOfInterestDataAsset;

UCLASS(Abstract, EditInlineNew)
class MAINE_API UMapPOIWidget : public UBaseMapEntryWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    UPointOfInterestDataAsset* POIData;
    
public:
    UMapPOIWidget();
};

