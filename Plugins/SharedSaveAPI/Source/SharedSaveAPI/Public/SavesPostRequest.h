#pragma once
#include "CoreMinimal.h"
#include "SavesPostRequest.generated.h"

USTRUCT(BlueprintType)
struct SHAREDSAVEAPI_API FSavesPostRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    FSavesPostRequest();
};

