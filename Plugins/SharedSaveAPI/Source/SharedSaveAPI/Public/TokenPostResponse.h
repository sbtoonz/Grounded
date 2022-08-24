#pragma once
#include "CoreMinimal.h"
#include "SaveLimits.h"
#include "BaseResponse.h"
#include "SharedSaveUser.h"
#include "TokenPostResponse.generated.h"

USTRUCT(BlueprintType)
struct SHAREDSAVEAPI_API FTokenPostResponse : public FBaseResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Token;
    
    UPROPERTY(EditAnywhere)
    int64 expiresAtUnix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSharedSaveUser User;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSaveLimits SaveLimits;
    
    FTokenPostResponse();
};

