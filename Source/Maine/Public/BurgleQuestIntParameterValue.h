#pragma once
#include "CoreMinimal.h"
#include "BurgleQuestParameterValue.h"
#include "BurgleQuestIntParameterValue.generated.h"

USTRUCT()
struct MAINE_API FBurgleQuestIntParameterValue : public FBurgleQuestParameterValue {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 Value;
    
    FBurgleQuestIntParameterValue();
};

