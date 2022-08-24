#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "LocString.h"
#include "RadialShortcutData.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FRadialShortcutData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush Brush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString DisplayName;
    
    FRadialShortcutData();
};

