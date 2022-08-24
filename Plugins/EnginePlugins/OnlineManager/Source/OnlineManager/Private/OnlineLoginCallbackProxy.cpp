#include "OnlineLoginCallbackProxy.h"

class UObject;
class APlayerController;
class UOnlineLoginCallbackProxy;

UOnlineLoginCallbackProxy* UOnlineLoginCallbackProxy::OnlineLogin(UObject* WorldContextObject, APlayerController* InPlayerController) {
    return NULL;
}

bool UOnlineLoginCallbackProxy::OnlineIsLoggedIn(APlayerController* InPlayerController) {
    return false;
}

FString UOnlineLoginCallbackProxy::OnlineGetDisplayName(APlayerController* InPlayerController, FName InSubsystem) {
    return TEXT("");
}

UOnlineLoginCallbackProxy::UOnlineLoginCallbackProxy() {
}

