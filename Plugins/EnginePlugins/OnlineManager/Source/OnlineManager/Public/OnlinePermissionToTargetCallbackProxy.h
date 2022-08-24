#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "BlueprintOnlineCheckUserPermissionResultDelegateDelegate.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "EOnlinePermission.h"
#include "OnlinePermissionToTargetCallbackProxy.generated.h"

class UObject;
class UOnlinePermissionToTargetCallbackProxy;
class APlayerController;
class APlayerState;

UCLASS(Blueprintable, MinimalAPI)
class UOnlinePermissionToTargetCallbackProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintOnlineCheckUserPermissionResultDelegate onSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate onFailure;
    
    UOnlinePermissionToTargetCallbackProxy();
    UFUNCTION(BlueprintCallable)
    static bool OnlineCheckUserPermissionToCached(APlayerController* InPlayerController, APlayerState* TargetPlayerState, EOnlinePermission InPermissionToCheck);
    
    UFUNCTION(BlueprintCallable)
    static UOnlinePermissionToTargetCallbackProxy* OnlineCheckUserPermissionTo(UObject* WorldContextObject, APlayerController* InPlayerController, APlayerState* InTargetPlayerState, EOnlinePermission InPermissionToCheck, FName InSubsystemName);
    
};

