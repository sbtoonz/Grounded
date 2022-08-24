#pragma once
#include "CoreMinimal.h"
#include "BaseResponse.h"
#include "SharedSaveContainer.h"
#include "StorageSingleGetResponse.generated.h"

USTRUCT(BlueprintType)
struct SHAREDSAVEAPI_API FStorageSingleGetResponse : public FBaseResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSharedSaveContainer container;
    
    FStorageSingleGetResponse();
};

