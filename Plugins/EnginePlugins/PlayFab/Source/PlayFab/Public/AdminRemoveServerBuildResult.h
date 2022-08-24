#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "AdminRemoveServerBuildResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminRemoveServerBuildResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FAdminRemoveServerBuildResult();
};

