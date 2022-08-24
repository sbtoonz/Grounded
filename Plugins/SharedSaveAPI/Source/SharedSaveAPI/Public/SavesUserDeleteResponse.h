#pragma once
#include "CoreMinimal.h"
#include "BaseResponse.h"
#include "SharedSave.h"
#include "SavesUserDeleteResponse.generated.h"

USTRUCT(BlueprintType)
struct SHAREDSAVEAPI_API FSavesUserDeleteResponse : public FBaseResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSharedSave Save;
    
    FSavesUserDeleteResponse();
};

