#pragma once
#include "CoreMinimal.h"
#include "SavesStopPostRequest.generated.h"

USTRUCT(BlueprintType)
struct SHAREDSAVEAPI_API FSavesStopPostRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString saveId;
    
    FSavesStopPostRequest();
};

