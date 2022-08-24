#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "LocalizationGetLanguageListResponse.h"
#include "PlayFabBaseModel.h"
#include "OnPlayFabLocalizationRequestCompletedDelegate.h"
#include "PlayFabError.h"
#include "LocalizationGetLanguageListRequest.h"
#include "PlayFabLocalizationAPI.generated.h"

class UPlayFabJsonObject;
class UPlayFabAuthenticationContext;
class UObject;
class UPlayFabLocalizationAPI;

UCLASS(Blueprintable)
class PLAYFAB_API UPlayFabLocalizationAPI : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetLanguageList, FLocalizationGetLanguageListResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnFailurePlayFabError, FPlayFabError, Error, UObject*, customData);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayFabLocalizationRequestCompleted OnPlayFabResponse;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabAuthenticationContext* CallAuthenticationContext;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* RequestJsonObj;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* ResponseJsonObj;
    
public:
    UPlayFabLocalizationAPI();
    UFUNCTION(BlueprintCallable)
    void HelperGetLanguageList(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabLocalizationAPI* GetLanguageList(FLocalizationGetLanguageListRequest Request, UPlayFabLocalizationAPI::FDelegateOnSuccessGetLanguageList onSuccess, UPlayFabLocalizationAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
};

