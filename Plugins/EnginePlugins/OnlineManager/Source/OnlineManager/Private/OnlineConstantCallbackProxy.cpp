#include "OnlineConstantCallbackProxy.h"

class UObject;
class APlayerController;
class UOnlineConstantCallbackProxy;

UOnlineConstantCallbackProxy* UOnlineConstantCallbackProxy::OnlineSynchronizeConstant(UObject* WorldContextObject, APlayerController* InPlayerController) {
    return NULL;
}

FString UOnlineConstantCallbackProxy::OnlineConstantGetString(const FString& ConstantName, const FString& DefaultValue) {
    return TEXT("");
}

int32 UOnlineConstantCallbackProxy::OnlineConstantGetInt(const FString& ConstantName, int32 DefaultValue) {
    return 0;
}

float UOnlineConstantCallbackProxy::OnlineConstantGetFloat(const FString& ConstantName, float DefaultValue) {
    return 0.0f;
}

bool UOnlineConstantCallbackProxy::OnlineConstantGetBool(const FString& ConstantName, bool DefaultValue) {
    return false;
}

bool UOnlineConstantCallbackProxy::OnlineConstantCheckOnlineVersion() {
    return false;
}

UOnlineConstantCallbackProxy::UOnlineConstantCallbackProxy() {
}

