#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
#include "TamingHappinessStep.generated.h"

USTRUCT(BlueprintType)
struct FTamingHappinessStep {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float MaxHappiness;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FLocString DisplayName;
    
    MAINE_API FTamingHappinessStep();
};

