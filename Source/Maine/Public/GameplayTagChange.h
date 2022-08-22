#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagChange.generated.h"

USTRUCT(BlueprintType)
struct FGameplayTagChange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag From;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag To;
    
    MAINE_API FGameplayTagChange();
};

