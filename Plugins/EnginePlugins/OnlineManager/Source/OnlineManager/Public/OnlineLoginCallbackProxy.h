#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnlineLoginResultDelegate.h"
#include "OnlineLoginCallbackProxy.generated.h"

class UOnlineLoginCallbackProxy;
class UObject;
class APlayerController;

UCLASS(Blueprintable, MinimalAPI)
class UOnlineLoginCallbackProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnlineLoginResult onSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnlineLoginResult onFailure;
    
    UOnlineLoginCallbackProxy();
    UFUNCTION(BlueprintCallable)
    static UOnlineLoginCallbackProxy* OnlineLogin(UObject* WorldContextObject, APlayerController* InPlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool OnlineIsLoggedIn(APlayerController* InPlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString OnlineGetDisplayName(APlayerController* InPlayerController, FName InSubsystem);
    
};

