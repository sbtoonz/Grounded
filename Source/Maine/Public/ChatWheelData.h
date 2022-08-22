#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIFlowCharts -ObjectName=ChatterEventReference -FallbackName=ChatterEventReference
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
#include "ChatWheelData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct MAINE_API FChatWheelData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FChatterEventReference ChatterEvent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FLocString ChatWheelName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UTexture2D* ChatWheelIcon;
    
    FChatWheelData();
};

