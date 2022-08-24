#include "PlayFabMatchmakerModelDecoder.h"

class UPlayFabJsonObject;

FMatchmakerUserInfoResponse UPlayFabMatchmakerModelDecoder::decodeUserInfoResponseResponse(UPlayFabJsonObject* response) {
    return FMatchmakerUserInfoResponse{};
}

FMatchmakerStartGameResponse UPlayFabMatchmakerModelDecoder::decodeStartGameResponseResponse(UPlayFabJsonObject* response) {
    return FMatchmakerStartGameResponse{};
}

FMatchmakerPlayerLeftResponse UPlayFabMatchmakerModelDecoder::decodePlayerLeftResponseResponse(UPlayFabJsonObject* response) {
    return FMatchmakerPlayerLeftResponse{};
}

FMatchmakerPlayerJoinedResponse UPlayFabMatchmakerModelDecoder::decodePlayerJoinedResponseResponse(UPlayFabJsonObject* response) {
    return FMatchmakerPlayerJoinedResponse{};
}

FMatchmakerAuthUserResponse UPlayFabMatchmakerModelDecoder::decodeAuthUserResponseResponse(UPlayFabJsonObject* response) {
    return FMatchmakerAuthUserResponse{};
}

UPlayFabMatchmakerModelDecoder::UPlayFabMatchmakerModelDecoder() {
}

