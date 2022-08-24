#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "AdminGetServerBuildUploadURLRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminGetServerBuildUploadURLRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BuildId;
    
    FAdminGetServerBuildUploadURLRequest();
};

