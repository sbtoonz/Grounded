#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ProcessingTypeGlobalData.generated.h"

class UVisualEffect;

USTRUCT(BlueprintType)
struct MAINE_API FProcessingTypeGlobalData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ProcessingTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProcessingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowPlayerRemoval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVisualEffect* WorkingVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVisualEffect* StartedVFX;
    
    FProcessingTypeGlobalData();
};

