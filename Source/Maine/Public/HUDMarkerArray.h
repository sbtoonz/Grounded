#pragma once
#include "CoreMinimal.h"
#include "HUDMarkerArray.generated.h"

class UHUDMarkerData;

USTRUCT(BlueprintType)
struct MAINE_API FHUDMarkerArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UHUDMarkerData*> MarkerArray;
    
    FHUDMarkerArray();
};

