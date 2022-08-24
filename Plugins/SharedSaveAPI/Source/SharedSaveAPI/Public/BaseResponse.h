#pragma once
#include "CoreMinimal.h"
#include "BaseResponse.generated.h"

USTRUCT(BlueprintType)
struct SHAREDSAVEAPI_API FBaseResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Status;
    
    FBaseResponse();
};

