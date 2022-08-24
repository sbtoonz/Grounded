#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "LocString.h"
#include "InputKeyData.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FInputKeyData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush Image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString OverrideNarrationName;
    
    FInputKeyData();
};

