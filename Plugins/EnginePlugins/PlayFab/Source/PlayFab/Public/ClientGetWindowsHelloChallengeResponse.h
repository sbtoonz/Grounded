#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ClientGetWindowsHelloChallengeResponse.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientGetWindowsHelloChallengeResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Challenge;
    
    FClientGetWindowsHelloChallengeResponse();
};

