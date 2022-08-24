#pragma once
#include "CoreMinimal.h"
#include "TokenPostRequest.generated.h"

USTRUCT(BlueprintType)
struct SHAREDSAVEAPI_API FTokenPostRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString xuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString pxuid;
    
    FTokenPostRequest();
};

