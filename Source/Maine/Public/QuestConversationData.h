#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIFlowCharts -ObjectName=ConversationReference -FallbackName=ConversationReference
#include "QuestConversationData.generated.h"

USTRUCT(BlueprintType)
struct FQuestConversationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FConversationReference ConversationReference;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 NodeId;
    
    MAINE_API FQuestConversationData();
};

