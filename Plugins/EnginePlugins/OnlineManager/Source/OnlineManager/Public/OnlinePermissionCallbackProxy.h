#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "BlueprintOnlineCheckUserPrivilegeResultDelegateDelegate.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "EOnlineUserPrivilege.h"
#include "OnlinePermissionCallbackProxy.generated.h"

class UObject;
class UOnlinePermissionCallbackProxy;
class APlayerController;

UCLASS(Blueprintable, MinimalAPI)
class UOnlinePermissionCallbackProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintOnlineCheckUserPrivilegeResultDelegate onSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate onFailure;
    
    UOnlinePermissionCallbackProxy();
    UFUNCTION(BlueprintCallable)
    static UOnlinePermissionCallbackProxy* OnlineCheckUserPrivilege(UObject* WorldContextObject, APlayerController* InPlayerController, EOnlineUserPrivilege InPrivilegeToCheck, bool bSilently, FName InSubsystemName);
    
};

