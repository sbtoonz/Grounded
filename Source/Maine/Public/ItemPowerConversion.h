#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
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

