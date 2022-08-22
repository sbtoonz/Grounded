#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
#include "HUDMarkerVariationData.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FHUDMarkerVariationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<FSlateBrush> BrushList;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<FSlateBrush> MapBrushList;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<FLocString> BrushDisplayName;
    
    FHUDMarkerVariationData();
};

