#pragma once
#include "CoreMinimal.h"
#include "EQSParameter.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EAIParamType -FallbackName=EAIParamType
#include "AIDynamicParam_Maine.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FAIDynamicParam_Maine {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ParamName;
    
    UPROPERTY(EditAnywhere)
    EAIParamType ParamType;
    
    UPROPERTY(EditAnywhere)
    float Value;
    
    UPROPERTY(EditAnywhere)
    FEQSParameter ValueSelector;
    
    FAIDynamicParam_Maine();
};

