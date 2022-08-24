#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "AdminListBuildsResult.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminListBuildsResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPlayFabJsonObject*> Builds;
    
    FAdminListBuildsResult();
};

