#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "LocString.h"
#include "HUDMarkerVariationData.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FHUDMarkerVariationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSlateBrush> BrushList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSlateBrush> MapBrushList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLocString> BrushDisplayName;
    
    FHUDMarkerVariationData();
};

