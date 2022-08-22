#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "EChatBoxMessageType.h"
#include "ChatBoxMessage.generated.h"

class ASurvivalPlayerState;

USTRUCT(BlueprintType)
struct FChatBoxMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    ASurvivalPlayerState* SenderPlayerState;
    
    UPROPERTY(BlueprintReadWrite)
    FString Message;
    
    UPROPERTY(BlueprintReadWrite)
    FColor Color;
    
    UPROPERTY(BlueprintReadWrite)
    EChatBoxMessageType Type;
    
    MAINE_API FChatBoxMessage();
};

