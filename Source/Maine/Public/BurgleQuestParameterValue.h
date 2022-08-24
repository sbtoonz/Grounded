#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BurgleQuestParameterValue.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FBurgleQuestParameterValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange ProgressRange;
    
    FBurgleQuestParameterValue();
};

