#pragma once
#include "CoreMinimal.h"
#include "BlueprintFriendResult.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "OnlineInviteCallbackProxy.generated.h"

class UObject;
class UOnlineInviteCallbackProxy;
class APlayerController;

UCLASS(Blueprintable, MinimalAPI)
class UOnlineInviteCallbackProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate onSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate onFailure;
    
    UOnlineInviteCallbackProxy();
    UFUNCTION(BlueprintCallable)
    static UOnlineInviteCallbackProxy* OnlineSendInvite(UObject* WorldContextObject, APlayerController* InPlayerController, const FBlueprintFriendResult& TargetPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool OnlineHasInvitationWaitingLogin(UObject* WorldContextObject);
    
};

