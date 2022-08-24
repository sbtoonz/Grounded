#pragma once
#include "CoreMinimal.h"
#include "SavesHeartbeatPostRequest.generated.h"

USTRUCT(BlueprintType)
struct SHAREDSAVEAPI_API FSavesHeartbeatPostRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString saveId;
    
    FSavesHeartbeatPostRequest();
};

