#pragma once
#include "CoreMinimal.h"
#include "FlowChartNode.h"
#include "EndStateNode.generated.h"

USTRUCT(BlueprintType)
struct OEIFLOWCHARTS_API FEndStateNode : public FFlowChartNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWillFailQuest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EndStateID;
    
public:
    FEndStateNode();
};

