#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "AdminGetServerBuildUploadURLResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminGetServerBuildUploadURLResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString URL;
    
    FAdminGetServerBuildUploadURLResult();
};

