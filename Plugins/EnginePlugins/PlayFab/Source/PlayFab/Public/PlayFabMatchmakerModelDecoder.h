#pragma once
#include "CoreMinimal.h"
#include "MatchmakerStartGameResponse.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MatchmakerUserInfoResponse.h"
#include "MatchmakerAuthUserResponse.h"
#include "MatchmakerPlayerLeftResponse.h"
#include "MatchmakerPlayerJoinedResponse.h"
#include "PlayFabMatchmakerModelDecoder.generated.h"

class UPlayFabJsonObject;

UCLASS(Blueprintable)
class PLAYFAB_API UPlayFabMatchmakerModelDecoder : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPlayFabMatchmakerModelDecoder();
    UFUNCTION(BlueprintCallable)
    static FMatchmakerUserInfoResponse decodeUserInfoResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FMatchmakerStartGameResponse decodeStartGameResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FMatchmakerPlayerLeftResponse decodePlayerLeftResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FMatchmakerPlayerJoinedResponse decodePlayerJoinedResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FMatchmakerAuthUserResponse decodeAuthUserResponseResponse(UPlayFabJsonObject* response);
    
};

