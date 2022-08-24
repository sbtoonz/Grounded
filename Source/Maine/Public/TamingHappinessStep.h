#pragma once
#include "CoreMinimal.h"
#include "LocString.h"
#include "TamingHappinessStep.generated.h"

USTRUCT(BlueprintType)
struct FTamingHappinessStep {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHappiness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString DisplayName;
    
    MAINE_API FTamingHappinessStep();
};

