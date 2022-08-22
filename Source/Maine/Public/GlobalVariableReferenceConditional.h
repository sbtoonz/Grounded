#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIGlobalVariables -ObjectName=GlobalVariableReference -FallbackName=GlobalVariableReference
//CROSS-MODULE INCLUDE V2: -ModuleName=OEICommon -ObjectName=EComparisonOperator -FallbackName=EComparisonOperator
#include "GlobalVariableReferenceConditional.generated.h"

USTRUCT(BlueprintType)
struct FGlobalVariableReferenceConditional {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGlobalVariableReference GlobalVariable;
    
    UPROPERTY(EditAnywhere)
    EComparisonOperator ComparisonOperator;
    
    UPROPERTY(EditAnywhere)
    int32 Value;
    
    MAINE_API FGlobalVariableReferenceConditional();
};

