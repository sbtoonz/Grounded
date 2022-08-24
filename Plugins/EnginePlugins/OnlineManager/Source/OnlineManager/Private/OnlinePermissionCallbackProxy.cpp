#include "OnlinePermissionCallbackProxy.h"

class UOnlinePermissionCallbackProxy;
class UObject;
class APlayerController;

UOnlinePermissionCallbackProxy* UOnlinePermissionCallbackProxy::OnlineCheckUserPrivilege(UObject* WorldContextObject, APlayerController* InPlayerController, EOnlineUserPrivilege InPrivilegeToCheck, bool bSilently, FName InSubsystemName) {
    return NULL;
}

UOnlinePermissionCallbackProxy::UOnlinePermissionCallbackProxy() {
}

