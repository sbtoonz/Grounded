#pragma once
#include "CoreMinimal.h"
#include "FlowChartNode.h"
#include "ResumeNode.generated.h"

USTRUCT(BlueprintType)
struct OEIFLOWCHARTS_API FResumeNode : public FFlowChartNode {
    GENERATED_BODY()
public:
    FResumeNode();
};

