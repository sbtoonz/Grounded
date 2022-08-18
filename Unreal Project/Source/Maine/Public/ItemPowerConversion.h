#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ItemPowerConversion.generated.h"

USTRUCT(BlueprintType)
struct FItemPowerConversion {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag From;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag To;
    
    MAINE_API FItemPowerConversion();
};

