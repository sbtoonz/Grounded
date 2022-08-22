#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "ProcessingTypeGlobalData.generated.h"

class UVisualEffect;

USTRUCT(BlueprintType)
struct MAINE_API FProcessingTypeGlobalData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag ProcessingTag;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ProcessingTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bAllowPlayerRemoval;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UVisualEffect* WorkingVFX;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UVisualEffect* StartedVFX;
    
    FProcessingTypeGlobalData();
};

