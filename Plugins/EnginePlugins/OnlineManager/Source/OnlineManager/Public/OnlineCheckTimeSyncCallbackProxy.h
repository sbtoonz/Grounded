#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "OnlineCheckTimeSyncCallbackProxy.generated.h"

class UObject;
class UOnlineCheckTimeSyncCallbackProxy;

UCLASS(Blueprintable, MinimalAPI)
class UOnlineCheckTimeSyncCallbackProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCompletedDelegate, float, TimeOffsetSec, float, NetworkDelaySec);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCompletedDelegate onSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate onFailure;
    
    UOnlineCheckTimeSyncCallbackProxy();
    UFUNCTION(BlueprintCallable)
    static UOnlineCheckTimeSyncCallbackProxy* OnlineCheckTimeSync(UObject* WorldContextObject);
    
};

