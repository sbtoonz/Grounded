#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "AdminModifyMatchmakerGameModesResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminModifyMatchmakerGameModesResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FAdminModifyMatchmakerGameModesResult();
};

