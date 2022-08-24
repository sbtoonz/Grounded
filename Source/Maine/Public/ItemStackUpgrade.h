#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ItemStackUpgrade.generated.h"

USTRUCT(BlueprintType)
struct FItemStackUpgrade {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ItemStackTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Tier;
    
    MAINE_API FItemStackUpgrade();
};

