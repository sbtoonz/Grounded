#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatRange -FallbackName=FloatRange
#include "BurgleQuestParameterValue.generated.h"

USTRUCT()
struct MAINE_API FBurgleQuestParameterValue {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FFloatRange ProgressRange;
    
    FBurgleQuestParameterValue();
};

