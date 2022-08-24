#pragma once
#include "CoreMinimal.h"
#include "BaseResponse.h"
#include "SharedSave.h"
#include "SavesUserSelfDeleteResponse.generated.h"

USTRUCT(BlueprintType)
struct SHAREDSAVEAPI_API FSavesUserSelfDeleteResponse : public FBaseResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSharedSave Save;
    
    FSavesUserSelfDeleteResponse();
};

