#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ClientLinkWindowsHelloAccountResponse.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientLinkWindowsHelloAccountResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FClientLinkWindowsHelloAccountResponse();
};

