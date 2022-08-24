#pragma once
#include "CoreMinimal.h"
#include "LocString.h"
#include "EKeyItemVisibility.h"
#include "KeyItemDisplayData.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct MAINE_API FKeyItemDisplayData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString LocalizedDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKeyItemVisibility Visibility;
    
    FKeyItemDisplayData();
};

