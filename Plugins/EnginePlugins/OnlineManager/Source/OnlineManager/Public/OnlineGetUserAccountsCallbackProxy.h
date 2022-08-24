#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "EBlueprintUserProfilePictureSize.h"
#include "BlueprintOnlineGetUserAccountsResultDelegateDelegate.h"
#include "BlueprintUserOnlineAccountResult.h"
#include "OnlineGetUserAccountsCallbackProxy.generated.h"

class UOnlineGetUserAccountsCallbackProxy;
class UObject;
class APlayerController;

UCLASS(Blueprintable, MinimalAPI)
class UOnlineGetUserAccountsCallbackProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintOnlineGetUserAccountsResultDelegate onSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintOnlineGetUserAccountsResultDelegate onFailure;
    
    UOnlineGetUserAccountsCallbackProxy();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString OnlineGetUserAccountUserXUID(const FBlueprintUserOnlineAccountResult& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString OnlineGetUserAccountUserID(const FBlueprintUserOnlineAccountResult& Result);
    
    UFUNCTION(BlueprintCallable)
    static UOnlineGetUserAccountsCallbackProxy* OnlineGetUserAccountsList(UObject* WorldContextObject, APlayerController* PlayerController, const TArray<FString>& UserIDs, FName SubsystemName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString OnlineGetUserAccountPictureURI(const FBlueprintUserOnlineAccountResult& Result, EBlueprintUserProfilePictureSize PictureSize);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString OnlineGetUserAccountDisplayName(const FBlueprintUserOnlineAccountResult& Result);
    
};

