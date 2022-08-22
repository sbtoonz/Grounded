#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "PredefinedColonyData.generated.h"

class UColonyConfiguration;

USTRUCT(BlueprintType)
struct FPredefinedColonyData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag Tag;
    
    UPROPERTY(EditDefaultsOnly)
    UColonyConfiguration* Config;
    
    MAINE_API FPredefinedColonyData();
};

