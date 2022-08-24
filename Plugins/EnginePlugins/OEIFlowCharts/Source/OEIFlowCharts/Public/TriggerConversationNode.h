#pragma once
#include "CoreMinimal.h"
#include "ConversationReference.h"
#include "DialogueNode.h"
#include "ETriggerSourceType.h"
#include "TriggerConversationNode.generated.h"

USTRUCT(BlueprintType)
struct OEIFLOWCHARTS_API FTriggerConversationNode : public FDialogueNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConversationReference Conversation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartNodeID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETriggerSourceType TriggerSource;
    
public:
    FTriggerConversationNode();
};

