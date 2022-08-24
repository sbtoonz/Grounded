#pragma once
#include "CoreMinimal.h"
#include "ResultSuccessNode.h"
#include "GlobalVariableConditional.h"
#include "ResultSuccessGlobalVariableNode.generated.h"

USTRUCT(BlueprintType)
struct OEIFLOWCHARTS_API FResultSuccessGlobalVariableNode : public FResultSuccessNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGlobalVariableConditional Conditional;
    
public:
    FResultSuccessGlobalVariableNode();
};

