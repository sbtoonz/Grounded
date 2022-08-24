#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "EBlueprintProfilePictureSize.h"
#include "BlueprintOnlineGetFriendListResultDelegateDelegate.h"
#include "BlueprintFriendResult.h"
#include "OnlineGetFriendListCallbackProxy.generated.h"

class UOnlineGetFriendListCallbackProxy;
class UObject;
class APlayerController;

UCLASS(Blueprintable, MinimalAPI)
class UOnlineGetFriendListCallbackProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintOnlineGetFriendListResultDelegate onSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintOnlineGetFriendListResultDelegate onFailure;
    
    UOnlineGetFriendListCallbackProxy();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString OnlineGetFriendUserXUID(const FBlueprintFriendResult& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString OnlineGetFriendUserID(const FBlueprintFriendResult& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString OnlineGetFriendPictureURI(const FBlueprintFriendResult& Result, EBlueprintProfilePictureSize PictureSize);
    
    UFUNCTION(BlueprintCallable)
    static UOnlineGetFriendListCallbackProxy* OnlineGetFriendList(UObject* WorldContextObject, APlayerController* PlayerController, const FString& ListName, FName SubsystemName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool OnlineGetFriendIsPlayingThisGame(const FBlueprintFriendResult& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool OnlineGetFriendIsPlaying(const FBlueprintFriendResult& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool OnlineGetFriendIsOnline(const FBlueprintFriendResult& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool OnlineGetFriendIsJoinable(const FBlueprintFriendResult& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 OnlineGetFriendInviteState(const FBlueprintFriendResult& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString OnlineGetFriendDisplayName(const FBlueprintFriendResult& Result);
    
};

