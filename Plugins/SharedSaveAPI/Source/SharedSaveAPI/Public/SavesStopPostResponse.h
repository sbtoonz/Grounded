#pragma once
#include "CoreMinimal.h"
#include "BaseResponse.h"
#include "SavesStopPostResponse.generated.h"

USTRUCT(BlueprintType)
struct SHAREDSAVEAPI_API FSavesStopPostResponse : public FBaseResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString saveId;
    
    FSavesStopPostResponse();
};

