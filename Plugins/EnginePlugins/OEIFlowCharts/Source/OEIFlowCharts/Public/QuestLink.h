#pragma once
#include "CoreMinimal.h"
#include "FlowChartLink.h"
#include "QuestLink.generated.h"

USTRUCT(BlueprintType)
struct OEIFLOWCHARTS_API FQuestLink : public FFlowChartLink {
    GENERATED_BODY()
public:
    FQuestLink();
};

