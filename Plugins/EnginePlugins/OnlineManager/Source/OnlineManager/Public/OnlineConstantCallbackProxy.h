#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "OnlineConstantCallbackProxy.generated.h"

class UObject;
class UOnlineConstantCallbackProxy;
class APlayerController;

UCLASS(Blueprintable, MinimalAPI)
class UOnlineConstantCallbackProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate onSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate onFailure;
    
    UOnlineConstantCallbackProxy();
    UFUNCTION(BlueprintCallable)
    static UOnlineConstantCallbackProxy* OnlineSynchronizeConstant(UObject* WorldContextObject, APlayerController* InPlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString OnlineConstantGetString(const FString& ConstantName, const FString& DefaultValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 OnlineConstantGetInt(const FString& ConstantName, int32 DefaultValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float OnlineConstantGetFloat(const FString& ConstantName, float DefaultValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool OnlineConstantGetBool(const FString& ConstantName, bool DefaultValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool OnlineConstantCheckOnlineVersion();
    
};

