#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ReputationData.generated.h"

USTRUCT(BlueprintType)
struct FReputationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag FactionTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxObservedValue;
    
    MAINE_API FReputationData();
};

