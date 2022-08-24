#pragma once
#include "CoreMinimal.h"
#include "HostsUserPostRequest.generated.h"

USTRUCT(BlueprintType)
struct SHAREDSAVEAPI_API FHostsUserPostRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString authorizeXuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString authorizeName;
    
    FHostsUserPostRequest();
};

