#pragma once
#include "CoreMinimal.h"
#include "HostsStartPostRequest.generated.h"

USTRUCT(BlueprintType)
struct SHAREDSAVEAPI_API FHostsStartPostRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString saveId;
    
    FHostsStartPostRequest();
};

