#pragma once
#include "CoreMinimal.h"
#include "FlowChartNode.h"
#include "QuestEventNode.generated.h"

USTRUCT(BlueprintType)
struct OEIFLOWCHARTS_API FQuestEventNode : public FFlowChartNode {
    GENERATED_BODY()
public:
    FQuestEventNode();
};

