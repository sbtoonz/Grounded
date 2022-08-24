#pragma once
#include "CoreMinimal.h"
#include "EComparisonOperator.h"
#include "GlobalVariableReference.h"
#include "GlobalVariableConditional.generated.h"

USTRUCT(BlueprintType)
struct OEIGLOBALVARIABLES_API FGlobalVariableConditional {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGlobalVariableReference ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EComparisonOperator Operator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VariableValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGlobalVariableReference ExternalVariableValueID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDefaultReturnValue;
    
public:
    FGlobalVariableConditional();
};

