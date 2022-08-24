#pragma once
#include "CoreMinimal.h"
#include "BaseResponse.h"
#include "HostData.h"
#include "HostsGetResponse.generated.h"

USTRUCT(BlueprintType)
struct SHAREDSAVEAPI_API FHostsGetResponse : public FBaseResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHostData host;
    
    FHostsGetResponse();
};

