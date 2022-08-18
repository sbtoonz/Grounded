#pragma once
#include "CoreMinimal.h"
#include "LocString.h"
#include "GameplayTagContainer.h"
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

