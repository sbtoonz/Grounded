#pragma once
#include "CoreMinimal.h"
#include "FlowChartNode.h"
#include "ENodeDisplayType.h"
#include "ENodePlayType.h"
#include "EPersistenceType.h"
#include "DialogueNode.generated.h"

USTRUCT(BlueprintType)
struct OEIFLOWCHARTS_API FDialogueNode : public FFlowChartNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNotSkippable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsQuestionNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideSpeaker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENodePlayType PlayType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPersistenceType Persistence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NoPlayRandomWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENodeDisplayType DisplayType;
    
public:
    FDialogueNode();
};

