#pragma once
#include "CoreMinimal.h"
#include "HUDMarkerArray.generated.h"

class UHUDMarkerData;

USTRUCT(BlueprintType)
struct MAINE_API FHUDMarkerArray {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<UHUDMarkerData*> MarkerArray;
    
    FHUDMarkerArray();
};

