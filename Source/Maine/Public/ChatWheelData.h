#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ChatterEventReference.h"
#include "LocString.h"
#include "ChatWheelData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct MAINE_API FChatWheelData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChatterEventReference ChatterEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString ChatWheelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* ChatWheelIcon;
    
    FChatWheelData();
};

