#pragma once
#include "CoreMinimal.h"
#include "PerkCondition.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FPerkCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Value;
    
    FPerkCondition();
};

