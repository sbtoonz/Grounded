#pragma once
#include "CoreMinimal.h"
#include "EConversationNodeDisplayStyle.h"
#include "SpeakerBundle.h"
#include "ENodeDisplayType.h"
#include "ShowConversationNodeParams.generated.h"

USTRUCT(BlueprintType)
struct FShowConversationNodeParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerResponseString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NodeString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpeakerBundle Speaker;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EConversationNodeDisplayStyle> DisplayStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENodeDisplayType DisplayType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPlayingVoice;
    
    MAINE_API FShowConversationNodeParams();
};

