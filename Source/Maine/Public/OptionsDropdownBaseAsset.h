#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
#include "BaseOptionsDropdownAsset.h"
#include "OptionsDropdownBaseAsset.generated.h"

UCLASS()
class MAINE_API UOptionsDropdownBaseAsset : public UBaseOptionsDropdownAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FLocString> DisplayStrings;
    
    UOptionsDropdownBaseAsset();
};

