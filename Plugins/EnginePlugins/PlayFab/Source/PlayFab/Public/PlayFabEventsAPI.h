#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "EventsWriteEventsResponse.h"
#include "PlayFabBaseModel.h"
#include "EventsWriteEventsRequest.h"
#include "PlayFabError.h"
#include "OnPlayFabEventsRequestCompletedDelegate.h"
#include "PlayFabEventsAPI.generated.h"

class UPlayFabJsonObject;
class UPlayFabAuthenticationContext;
class UPlayFabEventsAPI;
class UObject;

UCLASS(Blueprintable)
class PLAYFAB_API UPlayFabEventsAPI : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessWriteTelemetryEvents, FEventsWriteEventsResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessWriteEvents, FEventsWriteEventsResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnFailurePlayFabError, FPlayFabError, Error, UObject*, customData);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayFabEventsRequestCompleted OnPlayFabResponse;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabAuthenticationContext* CallAuthenticationContext;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* RequestJsonObj;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* ResponseJsonObj;
    
public:
    UPlayFabEventsAPI();
    UFUNCTION(BlueprintCallable)
    static UPlayFabEventsAPI* WriteTelemetryEvents(FEventsWriteEventsRequest Request, UPlayFabEventsAPI::FDelegateOnSuccessWriteTelemetryEvents onSuccess, UPlayFabEventsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEventsAPI* WriteEvents(FEventsWriteEventsRequest Request, UPlayFabEventsAPI::FDelegateOnSuccessWriteEvents onSuccess, UPlayFabEventsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    void HelperWriteTelemetryEvents(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperWriteEvents(FPlayFabBaseModel response, UObject* customData, bool successful);
    
};

