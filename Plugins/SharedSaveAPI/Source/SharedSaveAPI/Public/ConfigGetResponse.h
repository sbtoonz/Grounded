#pragma once
#include "CoreMinimal.h"
#include "BaseResponse.h"
#include "ConfigGetResponse.generated.h"

USTRUCT(BlueprintType)
struct SHAREDSAVEAPI_API FConfigGetResponse : public FBaseResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 apiStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString apiVersion;
    
    FConfigGetResponse();
};

