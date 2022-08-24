#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "BaseOptionsDropdownAsset.generated.h"

UCLASS(Abstract, Blueprintable)
class MAINE_API UBaseOptionsDropdownAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultSelectedIndex;
    
    UBaseOptionsDropdownAsset();
};

