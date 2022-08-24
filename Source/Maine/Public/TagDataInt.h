#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "TagDataInt.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FTagDataInt {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    FTagDataInt();
};

