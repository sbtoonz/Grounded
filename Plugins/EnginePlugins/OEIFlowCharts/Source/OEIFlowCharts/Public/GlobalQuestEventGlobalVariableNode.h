#pragma once
#include "CoreMinimal.h"
#include "GlobalQuestEventNode.h"
#include "GlobalVariableConditional.h"
#include "GlobalQuestEventGlobalVariableNode.generated.h"

USTRUCT(BlueprintType)
struct OEIFLOWCHARTS_API FGlobalQuestEventGlobalVariableNode : public FGlobalQuestEventNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGlobalVariableConditional Conditional;
    
public:
    FGlobalQuestEventGlobalVariableNode();
};

