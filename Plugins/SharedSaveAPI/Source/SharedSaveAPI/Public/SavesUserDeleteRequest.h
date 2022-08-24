#pragma once
#include "CoreMinimal.h"
#include "SavesUserDeleteRequest.generated.h"

USTRUCT(BlueprintType)
struct SHAREDSAVEAPI_API FSavesUserDeleteRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString deauthorizeXuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString saveId;
    
    FSavesUserDeleteRequest();
};

