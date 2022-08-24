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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString LocalizedDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ItemStackTag;
    
    FItemStackUpgradeData();
};

