#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "OnlineSendTextChatCallbackProxy.generated.h"

class UObject;
class APlayerController;
class UOnlineSendTextChatCallbackProxy;

UCLASS(Blueprintable, MinimalAPI)
class UOnlineSendTextChatCallbackProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate onSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate onFailure;
    
    UOnlineSendTextChatCallbackProxy();
    UFUNCTION(BlueprintCallable)
    static void OnlineSetTTSEnable(APlayerController* InPlayerController, bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    static UOnlineSendTextChatCallbackProxy* OnlineSendChatMessage(UObject* WorldContextObject, APlayerController* PlayerControllerconst, const FString& InChatMessage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool OnlineIsTTSEnabled(APlayerController* InPlayerController);
    
};

