#pragma once
#include "CoreMinimal.h"
#include "FlowChartNavigator.h"
#include "ConversationNavigator.generated.h"

class UConversationAsset;

USTRUCT(BlueprintType)
struct OEIFLOWCHARTS_API FConversationNavigator : public FFlowChartNavigator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UConversationAsset* ConversationAsset;
    
public:
    FConversationNavigator();
};

