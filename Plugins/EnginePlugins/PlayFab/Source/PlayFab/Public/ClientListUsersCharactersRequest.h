#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ClientListUsersCharactersRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientListUsersCharactersRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayFabId;
    
    FClientListUsersCharactersRequest();
};

