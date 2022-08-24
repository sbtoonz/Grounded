#pragma once
#include "CoreMinimal.h"
#include "SavesDeleteRequest.generated.h"

USTRUCT(BlueprintType)
struct SHAREDSAVEAPI_API FSavesDeleteRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString saveId;
    
    FSavesDeleteRequest();
};

