#include "PlayFabAuthenticationModelDecoder.h"

class UPlayFabJsonObject;

FAuthenticationValidateEntityTokenResponse UPlayFabAuthenticationModelDecoder::decodeValidateEntityTokenResponseResponse(UPlayFabJsonObject* response) {
    return FAuthenticationValidateEntityTokenResponse{};
}

FAuthenticationGetEntityTokenResponse UPlayFabAuthenticationModelDecoder::decodeGetEntityTokenResponseResponse(UPlayFabJsonObject* response) {
    return FAuthenticationGetEntityTokenResponse{};
}

UPlayFabAuthenticationModelDecoder::UPlayFabAuthenticationModelDecoder() {
}

