#include "OnlineGetFriendListCallbackProxy.h"

class UOnlineGetFriendListCallbackProxy;
class UObject;
class APlayerController;

FString UOnlineGetFriendListCallbackProxy::OnlineGetFriendUserXUID(const FBlueprintFriendResult& Result) {
    return TEXT("");
}

FString UOnlineGetFriendListCallbackProxy::OnlineGetFriendUserID(const FBlueprintFriendResult& Result) {
    return TEXT("");
}

FString UOnlineGetFriendListCallbackProxy::OnlineGetFriendPictureURI(const FBlueprintFriendResult& Result, EBlueprintProfilePictureSize PictureSize) {
    return TEXT("");
}

UOnlineGetFriendListCallbackProxy* UOnlineGetFriendListCallbackProxy::OnlineGetFriendList(UObject* WorldContextObject, APlayerController* PlayerController, const FString& ListName, FName SubsystemName) {
    return NULL;
}

bool UOnlineGetFriendListCallbackProxy::OnlineGetFriendIsPlayingThisGame(const FBlueprintFriendResult& Result) {
    return false;
}

bool UOnlineGetFriendListCallbackProxy::OnlineGetFriendIsPlaying(const FBlueprintFriendResult& Result) {
    return false;
}

bool UOnlineGetFriendListCallbackProxy::OnlineGetFriendIsOnline(const FBlueprintFriendResult& Result) {
    return false;
}

bool UOnlineGetFriendListCallbackProxy::OnlineGetFriendIsJoinable(const FBlueprintFriendResult& Result) {
    return false;
}

int32 UOnlineGetFriendListCallbackProxy::OnlineGetFriendInviteState(const FBlueprintFriendResult& Result) {
    return 0;
}

FString UOnlineGetFriendListCallbackProxy::OnlineGetFriendDisplayName(const FBlueprintFriendResult& Result) {
    return TEXT("");
}

UOnlineGetFriendListCallbackProxy::UOnlineGetFriendListCallbackProxy() {
}

