#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnlineLogoutResultDelegate2.h"
#include "OnlineLogoutCallbackProxy.generated.h"

class UObject;
class UOnlineLogoutCallbackProxy;
class APlayerController;

UCLASS(Blueprintable, MinimalAPI)
class UOnlineLogoutCallbackProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnlineLogoutResult onSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnlineLogoutResult onFailure;
    
    UOnlineLogoutCallbackProxy();
    UFUNCTION(BlueprintCallable)
    static UOnlineLogoutCallbackProxy* OnlineLogout(UObject* WorldContextObject, APlayerController* InPlayerController);
    
};

