#pragma once
#include "CoreMinimal.h"
#include "BaseResponse.h"
#include "ErrorResponse.generated.h"

USTRUCT(BlueprintType)
struct SHAREDSAVEAPI_API FErrorResponse : public FBaseResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Message;
    
    FErrorResponse();
};

