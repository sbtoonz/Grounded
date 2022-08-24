#pragma once
#include "CoreMinimal.h"
#include "FlowChartNode.h"
#include "QuestBranchNode.generated.h"

USTRUCT(BlueprintType)
struct OEIFLOWCHARTS_API FQuestBranchNode : public FFlowChartNode {
    GENERATED_BODY()
public:
    FQuestBranchNode();
};

