#include "OnlineLinkAccountCallbackProxy.h"

class UObject;
class UOnlineLinkAccountCallbackProxy;
class APlayerController;

UOnlineLinkAccountCallbackProxy* UOnlineLinkAccountCallbackProxy::OnlineUnlinkAccount(UObject* WorldContextObject, APlayerController* InPlayerController) {
    return NULL;
}

UOnlineLinkAccountCallbackProxy* UOnlineLinkAccountCallbackProxy::OnlineLinkAccount(UObject* WorldContextObject, APlayerController* InPlayerController) {
    return NULL;
}

bool UOnlineLinkAccountCallbackProxy::OnlineIsLinked(APlayerController* InPlayerController) {
    return false;
}

bool UOnlineLinkAccountCallbackProxy::OnlineIsAccountLinkingEnabled(APlayerController* InPlayerController) {
    return false;
}

FString UOnlineLinkAccountCallbackProxy::OnlineGetLinkedAccountDisplayName(APlayerController* InPlayerController) {
    return TEXT("");
}

UOnlineLinkAccountCallbackProxy::UOnlineLinkAccountCallbackProxy() {
}

