#pragma once
#include "CoreMinimal.h"
#include "GlobalVariableConditional.h"
#include "ObjectiveNode.h"
#include "UObject/NoExportTypes.h"
#include "TalkObjectiveNode.generated.h"

USTRUCT(BlueprintType)
struct OEIFLOWCHARTS_API FTalkObjectiveNode : public FObjectiveNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ConversationId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ConversationNodeID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGlobalVariableConditional ChildFailedConditional;
    
public:
    FTalkObjectiveNode();
};

