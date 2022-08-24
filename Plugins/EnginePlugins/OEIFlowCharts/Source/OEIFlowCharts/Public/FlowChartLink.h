#pragma once
#include "CoreMinimal.h"
#include "FlowChartLink.generated.h"

USTRUCT(BlueprintType)
struct OEIFLOWCHARTS_API FFlowChartLink {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FromNodeID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ToNodeID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ConditionalIndex;
    
public:
    FFlowChartLink();
};

