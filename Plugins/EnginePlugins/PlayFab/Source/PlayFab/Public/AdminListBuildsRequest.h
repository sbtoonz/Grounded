#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "AdminListBuildsRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminListBuildsRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    FAdminListBuildsRequest();
};

