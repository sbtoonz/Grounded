#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "TagDataInt.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FTagDataInt {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag Tag;
    
    UPROPERTY(EditDefaultsOnly)
    int32 Value;
    
    FTagDataInt();
};

