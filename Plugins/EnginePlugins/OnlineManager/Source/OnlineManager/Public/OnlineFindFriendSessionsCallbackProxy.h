#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "BlueprintOnlineFindFriendSessionsResultDelegateDelegate.h"
#include "OnlineFindFriendSessionsCallbackProxy.generated.h"

class APlayerController;
class UOnlineFindFriendSessionsCallbackProxy;
class UObject;

UCLASS(Blueprintable, MinimalAPI)
class UOnlineFindFriendSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintOnlineFindFriendSessionsResultDelegate onSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintOnlineFindFriendSessionsResultDelegate onFailure;
    
    UOnlineFindFriendSessionsCallbackProxy();
    UFUNCTION(BlueprintCallable)
    static UOnlineFindFriendSessionsCallbackProxy* OnlineFindFriendSessions(UObject* WorldContextObject, APlayerController* PlayerController, int32 MaxResults);
    
};

