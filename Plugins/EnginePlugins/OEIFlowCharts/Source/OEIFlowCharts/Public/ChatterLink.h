#pragma once
#include "CoreMinimal.h"
#include "FlowChartLink.h"
#include "ChatterLink.generated.h"

USTRUCT(BlueprintType)
struct FChatterLink : public FFlowChartLink {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RandomWeight;
    
public:
    OEIFLOWCHARTS_API FChatterLink();
};

