#pragma once
#include "CoreMinimal.h"
#include "PerkCondition.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FPerkCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    FPerkCondition();
};

