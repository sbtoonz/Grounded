#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "ItemStackUpgradeData.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct MAINE_API FItemStackUpgradeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FLocString LocalizedDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UObject* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FGameplayTag ItemStackTag;
    
    FItemStackUpgradeData();
};

