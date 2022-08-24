#pragma once
#include "CoreMinimal.h"
#include "BaseResponse.h"
#include "SharedSaveUser.h"
#include "UsersGetResponse.generated.h"

USTRUCT(BlueprintType)
struct SHAREDSAVEAPI_API FUsersGetResponse : public FBaseResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSharedSaveUser User;
    
    FUsersGetResponse();
};

