#pragma once
#include "CoreMinimal.h"
#include "FlowChartNode.h"
#include "BranchCompleteNode.generated.h"

USTRUCT(BlueprintType)
struct OEIFLOWCHARTS_API FBranchCompleteNode : public FFlowChartNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFailsObjective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BranchRootNodeID;
    
public:
    FBranchCompleteNode();
};

