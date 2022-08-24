#include "OnlinePermissionToTargetCallbackProxy.h"

class UOnlinePermissionToTargetCallbackProxy;
class APlayerController;
class APlayerState;
class UObject;

bool UOnlinePermissionToTargetCallbackProxy::OnlineCheckUserPermissionToCached(APlayerController* InPlayerController, APlayerState* TargetPlayerState, EOnlinePermission InPermissionToCheck) {
    return false;
}

UOnlinePermissionToTargetCallbackProxy* UOnlinePermissionToTargetCallbackProxy::OnlineCheckUserPermissionTo(UObject* WorldContextObject, APlayerController* InPlayerController, APlayerState* InTargetPlayerState, EOnlinePermission InPermissionToCheck, FName InSubsystemName) {
    return NULL;
}

UOnlinePermissionToTargetCallbackProxy::UOnlinePermissionToTargetCallbackProxy() {
}

