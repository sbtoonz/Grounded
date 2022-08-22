#pragma once
#include "CoreMinimal.h"
#include "EConversationNodeDisplayStyle.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIFlowCharts -ObjectName=SpeakerBundle -FallbackName=SpeakerBundle
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIFlowCharts -ObjectName=ENodeDisplayType -FallbackName=ENodeDisplayType
#include "ShowConversationNodeParams.generated.h"

USTRUCT(BlueprintType)
struct FShowConversationNodeParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString PlayerResponseString;
    
    UPROPERTY(BlueprintReadOnly)
    FString NodeString;
    
    UPROPERTY(BlueprintReadOnly)
    FSpeakerBundle Speaker;
    
    UPROPERTY(BlueprintReadOnly)
    TEnumAsByte<EConversationNodeDisplayStyle> DisplayStyle;
    
    UPROPERTY(BlueprintReadOnly)
    ENodeDisplayType DisplayType;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsPlayingVoice;
    
    MAINE_API FShowConversationNodeParams();
};

