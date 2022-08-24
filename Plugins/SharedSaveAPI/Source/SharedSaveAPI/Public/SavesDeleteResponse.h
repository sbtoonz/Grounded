#pragma once
#include "CoreMinimal.h"
#include "BaseResponse.h"
#include "SavesDeleteResponse.generated.h"

USTRUCT(BlueprintType)
struct SHAREDSAVEAPI_API FSavesDeleteResponse : public FBaseResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString saveId;
    
    FSavesDeleteResponse();
};

