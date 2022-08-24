#pragma once
#include "CoreMinimal.h"
#include "BaseMapEntryWidget.h"
#include "MapPOIWidget.generated.h"

class UPointOfInterestDataAsset;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API UMapPOIWidget : public UBaseMapEntryWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPointOfInterestDataAsset* POIData;
    
public:
    UMapPOIWidget();
};

