#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ItemStackUpgrade.generated.h"

USTRUCT(BlueprintType)
struct FItemStackUpgrade {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag ItemStackTag;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Tier;
    
    MAINE_API FItemStackUpgrade();
};

