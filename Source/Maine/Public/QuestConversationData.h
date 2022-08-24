#pragma once
#include "CoreMinimal.h"
#include "ConversationReference.h"
#include "QuestConversationData.generated.h"

USTRUCT(BlueprintType)
struct FQuestConversationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConversationReference ConversationReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NodeId;
    
    MAINE_API FQuestConversationData();
};

