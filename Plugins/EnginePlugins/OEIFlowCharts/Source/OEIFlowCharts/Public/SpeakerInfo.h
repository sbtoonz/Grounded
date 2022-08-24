#pragma once
#include "CoreMinimal.h"
#include "SpeakerReference.h"
#include "ConversationReference.h"
#include "SpeakerInfo.generated.h"

USTRUCT(BlueprintType)
struct OEIFLOWCHARTS_API FSpeakerInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpeakerReference Speaker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConversationReference Conversation;
    
public:
    FSpeakerInfo();
};

