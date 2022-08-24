#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ETitleMultiplayerServerEnabledStatus.h"
#include "MultiplayerGetTitleEnabledForMultiplayerServersStatusResponse.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETitleMultiplayerServerEnabledStatus Status;
    
    FMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse();
};

