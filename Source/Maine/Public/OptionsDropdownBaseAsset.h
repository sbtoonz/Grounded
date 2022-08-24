#pragma once
#include "CoreMinimal.h"
#include "BaseOptionsDropdownAsset.h"
#include "LocString.h"
#include "OptionsDropdownBaseAsset.generated.h"

UCLASS(Blueprintable)
class MAINE_API UOptionsDropdownBaseAsset : public UBaseOptionsDropdownAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLocString> DisplayStrings;
    
    UOptionsDropdownBaseAsset();
};

