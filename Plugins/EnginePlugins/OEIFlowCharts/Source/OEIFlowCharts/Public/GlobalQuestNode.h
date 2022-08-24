#pragma once
#include "CoreMinimal.h"
#include "FlowChartNode.h"
#include "GlobalQuestNode.generated.h"

USTRUCT(BlueprintType)
struct OEIFLOWCHARTS_API FGlobalQuestNode : public FFlowChartNode {
    GENERATED_BODY()
public:
    FGlobalQuestNode();
};

