#include "OnlineGetUserAccountsCallbackProxy.h"

class UObject;
class APlayerController;
class UOnlineGetUserAccountsCallbackProxy;

FString UOnlineGetUserAccountsCallbackProxy::OnlineGetUserAccountUserXUID(const FBlueprintUserOnlineAccountResult& Result) {
    return TEXT("");
}

FString UOnlineGetUserAccountsCallbackProxy::OnlineGetUserAccountUserID(const FBlueprintUserOnlineAccountResult& Result) {
    return TEXT("");
}

UOnlineGetUserAccountsCallbackProxy* UOnlineGetUserAccountsCallbackProxy::OnlineGetUserAccountsList(UObject* WorldContextObject, APlayerController* PlayerController, const TArray<FString>& UserIDs, FName SubsystemName) {
    return NULL;
}

FString UOnlineGetUserAccountsCallbackProxy::OnlineGetUserAccountPictureURI(const FBlueprintUserOnlineAccountResult& Result, EBlueprintUserProfilePictureSize PictureSize) {
    return TEXT("");
}

FString UOnlineGetUserAccountsCallbackProxy::OnlineGetUserAccountDisplayName(const FBlueprintUserOnlineAccountResult& Result) {
    return TEXT("");
}

UOnlineGetUserAccountsCallbackProxy::UOnlineGetUserAccountsCallbackProxy() {
}

