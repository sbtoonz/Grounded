#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "BaseOptionsDropdownAsset.generated.h"

UCLASS(Abstract)
class MAINE_API UBaseOptionsDropdownAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 DefaultSelectedIndex;
    
    UBaseOptionsDropdownAsset();
};

