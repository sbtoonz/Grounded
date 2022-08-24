#pragma once
#include "CoreMinimal.h"
#include "BurgleQuestParameterValue.h"
#include "BurgleQuestIntParameterValue.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FBurgleQuestIntParameterValue : public FBurgleQuestParameterValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    FBurgleQuestIntParameterValue();
};

