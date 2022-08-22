#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
#include "RadialShortcutData.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FRadialShortcutData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FSlateBrush Brush;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FLocString DisplayName;
    
    FRadialShortcutData();
};

