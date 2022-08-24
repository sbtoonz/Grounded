#pragma once
#include "CoreMinimal.h"
#include "FlowChartNavigator.h"
#include "ChatterNavigator.generated.h"

class UChatterAsset;

USTRUCT(BlueprintType)
struct OEIFLOWCHARTS_API FChatterNavigator : public FFlowChartNavigator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UChatterAsset* ChatterAsset;
    
public:
    FChatterNavigator();
};

