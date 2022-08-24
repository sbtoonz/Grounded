#pragma once
#include "CoreMinimal.h"
#include "BaseResponse.h"
#include "SharedSaveContainer.h"
#include "StorageGetResponse.generated.h"

USTRUCT(BlueprintType)
struct SHAREDSAVEAPI_API FStorageGetResponse : public FBaseResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSharedSaveContainer> containers;
    
    FStorageGetResponse();
};

