#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "AuthenticationValidateEntityTokenResponse.h"
#include "PlayFabError.h"
#include "AuthenticationGetEntityTokenResponse.h"
#include "PlayFabBaseModel.h"
#include "OnPlayFabAuthenticationRequestCompletedDelegate.h"
#include "AuthenticationValidateEntityTokenRequest.h"
#include "AuthenticationGetEntityTokenRequest.h"
#include "PlayFabAuthenticationAPI.generated.h"

class UPlayFabJsonObject;
class UPlayFabAuthenticationContext;
class UObject;
class UPlayFabAuthenticationAPI;

UCLASS(Blueprintable)
class PLAYFAB_API UPlayFabAuthenticationAPI : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessValidateEntityToken, FAuthenticationValidateEntityTokenResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetEntityToken, FAuthenticationGetEntityTokenResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnFailurePlayFabError, FPlayFabError, Error, UObject*, customData);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayFabAuthenticationRequestCompleted OnPlayFabResponse;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabAuthenticationContext* CallAuthenticationContext;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* RequestJsonObj;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* ResponseJsonObj;
    
public:
    UPlayFabAuthenticationAPI();
    UFUNCTION(BlueprintCallable)
    static UPlayFabAuthenticationAPI* ValidateEntityToken(FAuthenticationValidateEntityTokenRequest Request, UPlayFabAuthenticationAPI::FDelegateOnSuccessValidateEntityToken onSuccess, UPlayFabAuthenticationAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    void HelperValidateEntityToken(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetEntityToken(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAuthenticationAPI* GetEntityToken(FAuthenticationGetEntityTokenRequest Request, UPlayFabAuthenticationAPI::FDelegateOnSuccessGetEntityToken onSuccess, UPlayFabAuthenticationAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
};

