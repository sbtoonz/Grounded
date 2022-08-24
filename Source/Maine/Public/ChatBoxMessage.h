#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EChatBoxMessageType.h"
#include "ChatBoxMessage.generated.h"

class ASurvivalPlayerState;

USTRUCT(BlueprintType)
struct FChatBoxMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASurvivalPlayerState* SenderPlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EChatBoxMessageType Type;
    
    MAINE_API FChatBoxMessage();
};

