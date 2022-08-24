#include "OnlineSendTextChatCallbackProxy.h"

class APlayerController;
class UObject;
class UOnlineSendTextChatCallbackProxy;

void UOnlineSendTextChatCallbackProxy::OnlineSetTTSEnable(APlayerController* InPlayerController, bool bEnable) {
}

UOnlineSendTextChatCallbackProxy* UOnlineSendTextChatCallbackProxy::OnlineSendChatMessage(UObject* WorldContextObject, APlayerController* PlayerControllerconst, const FString& InChatMessage) {
    return NULL;
}

bool UOnlineSendTextChatCallbackProxy::OnlineIsTTSEnabled(APlayerController* InPlayerController) {
    return false;
}

UOnlineSendTextChatCallbackProxy::UOnlineSendTextChatCallbackProxy() {
}

