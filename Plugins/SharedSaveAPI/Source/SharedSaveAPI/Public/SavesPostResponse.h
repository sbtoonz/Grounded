#pragma once
#include "CoreMinimal.h"
#include "BaseResponse.h"
#include "SharedSave.h"
#include "SavesPostResponse.generated.h"

USTRUCT(BlueprintType)
struct SHAREDSAVEAPI_API FSavesPostResponse : public FBaseResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSharedSave Save;
    
    FSavesPostResponse();
};

