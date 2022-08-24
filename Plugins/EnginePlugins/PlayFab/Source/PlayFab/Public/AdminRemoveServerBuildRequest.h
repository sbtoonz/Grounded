#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "AdminRemoveServerBuildRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminRemoveServerBuildRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BuildId;
    
    FAdminRemoveServerBuildRequest();
};

