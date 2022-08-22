#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "ReputationData.generated.h"

USTRUCT(BlueprintType)
struct FReputationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag FactionTag;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Value;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MaxObservedValue;
    
    MAINE_API FReputationData();
};

