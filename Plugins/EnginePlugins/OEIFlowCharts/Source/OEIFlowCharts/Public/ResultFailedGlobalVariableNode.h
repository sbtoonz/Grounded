#pragma once
#include "CoreMinimal.h"
#include "ResultFailedNode.h"
#include "GlobalVariableConditional.h"
#include "ResultFailedGlobalVariableNode.generated.h"

USTRUCT(BlueprintType)
struct OEIFLOWCHARTS_API FResultFailedGlobalVariableNode : public FResultFailedNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGlobalVariableConditional Conditional;
    
public:
    FResultFailedGlobalVariableNode();
};

