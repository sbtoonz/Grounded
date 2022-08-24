#pragma once
#include "CoreMinimal.h"
#include "HostsUserDeleteRequest.generated.h"

USTRUCT(BlueprintType)
struct SHAREDSAVEAPI_API FHostsUserDeleteRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString deauthorizeUserId;
    
    FHostsUserDeleteRequest();
};

