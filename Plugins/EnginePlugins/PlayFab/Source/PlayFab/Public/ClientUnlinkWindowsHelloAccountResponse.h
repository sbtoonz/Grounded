#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ClientUnlinkWindowsHelloAccountResponse.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientUnlinkWindowsHelloAccountResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FClientUnlinkWindowsHelloAccountResponse();
};

