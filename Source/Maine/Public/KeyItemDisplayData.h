#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
#include "EKeyItemVisibility.h"
#include "KeyItemDisplayData.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct MAINE_API FKeyItemDisplayData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FLocString LocalizedDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UObject* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    EKeyItemVisibility Visibility;
    
    FKeyItemDisplayData();
};

