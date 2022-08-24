#pragma once
#include "CoreMinimal.h"
#include "GlobalVariableConditional.h"
#include "ObjectiveNode.h"
#include "GlobalVariableObjectiveNode.generated.h"

USTRUCT(BlueprintType)
struct OEIFLOWCHARTS_API FGlobalVariableObjectiveNode : public FObjectiveNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGlobalVariableConditional Conditional;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGlobalVariableConditional ChildFailedConditional;
    
public:
    FGlobalVariableObjectiveNode();
};

