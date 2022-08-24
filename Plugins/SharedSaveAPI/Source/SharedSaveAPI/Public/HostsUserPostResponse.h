#pragma once
#include "CoreMinimal.h"
#include "BaseResponse.h"
#include "SharedSave.h"
#include "HostsUserPostResponse.generated.h"

USTRUCT(BlueprintType)
struct SHAREDSAVEAPI_API FHostsUserPostResponse : public FBaseResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSharedSave Save;
    
    FHostsUserPostResponse();
};

