#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
#include "InputKeyData.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FInputKeyData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateBrush Image;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLocString OverrideNarrationName;
    
    FInputKeyData();
};

