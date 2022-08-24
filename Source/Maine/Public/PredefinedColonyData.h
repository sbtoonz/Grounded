#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "PredefinedColonyData.generated.h"

class UColonyConfiguration;

USTRUCT(BlueprintType)
struct FPredefinedColonyData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UColonyConfiguration* Config;
    
    MAINE_API FPredefinedColonyData();
};

