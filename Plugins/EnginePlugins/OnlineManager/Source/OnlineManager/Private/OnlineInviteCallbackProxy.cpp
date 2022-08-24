#include "OnlineInviteCallbackProxy.h"

class UOnlineInviteCallbackProxy;
class UObject;
class APlayerController;

UOnlineInviteCallbackProxy* UOnlineInviteCallbackProxy::OnlineSendInvite(UObject* WorldContextObject, APlayerController* InPlayerController, const FBlueprintFriendResult& TargetPlayer) {
    return NULL;
}

bool UOnlineInviteCallbackProxy::OnlineHasInvitationWaitingLogin(UObject* WorldContextObject) {
    return false;
}

UOnlineInviteCallbackProxy::UOnlineInviteCallbackProxy() {
}

