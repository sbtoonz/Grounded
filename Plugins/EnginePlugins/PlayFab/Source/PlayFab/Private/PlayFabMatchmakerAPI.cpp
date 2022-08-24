#include "PlayFabMatchmakerAPI.h"

class UObject;
class UPlayFabMatchmakerAPI;

UPlayFabMatchmakerAPI* UPlayFabMatchmakerAPI::UserInfo(FMatchmakerUserInfoRequest Request, UPlayFabMatchmakerAPI::FDelegateOnSuccessUserInfo onSuccess, UPlayFabMatchmakerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabMatchmakerAPI* UPlayFabMatchmakerAPI::StartGame(FMatchmakerStartGameRequest Request, UPlayFabMatchmakerAPI::FDelegateOnSuccessStartGame onSuccess, UPlayFabMatchmakerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabMatchmakerAPI* UPlayFabMatchmakerAPI::PlayerLeft(FMatchmakerPlayerLeftRequest Request, UPlayFabMatchmakerAPI::FDelegateOnSuccessPlayerLeft onSuccess, UPlayFabMatchmakerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabMatchmakerAPI* UPlayFabMatchmakerAPI::PlayerJoined(FMatchmakerPlayerJoinedRequest Request, UPlayFabMatchmakerAPI::FDelegateOnSuccessPlayerJoined onSuccess, UPlayFabMatchmakerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

void UPlayFabMatchmakerAPI::HelperUserInfo(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabMatchmakerAPI::HelperStartGame(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabMatchmakerAPI::HelperPlayerLeft(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabMatchmakerAPI::HelperPlayerJoined(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabMatchmakerAPI::HelperAuthUser(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

UPlayFabMatchmakerAPI* UPlayFabMatchmakerAPI::AuthUser(FMatchmakerAuthUserRequest Request, UPlayFabMatchmakerAPI::FDelegateOnSuccessAuthUser onSuccess, UPlayFabMatchmakerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabMatchmakerAPI::UPlayFabMatchmakerAPI() {
    this->CallAuthenticationContext = NULL;
    this->RequestJsonObj = NULL;
    this->ResponseJsonObj = NULL;
}

