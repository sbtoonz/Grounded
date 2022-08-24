#pragma once
#include "CoreMinimal.h"
#include "BaseResponse.h"
#include "SharedSave.h"
#include "SavesStartPostResponse.generated.h"

USTRUCT(BlueprintType)
struct SHAREDSAVEAPI_API FSavesStartPostResponse : public FBaseResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSharedSave Save;
    
    FSavesStartPostResponse();
};

