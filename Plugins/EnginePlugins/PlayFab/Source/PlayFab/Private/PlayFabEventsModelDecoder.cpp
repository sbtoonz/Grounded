#include "PlayFabEventsModelDecoder.h"

class UPlayFabJsonObject;

FEventsWriteEventsResponse UPlayFabEventsModelDecoder::decodeWriteEventsResponseResponse(UPlayFabJsonObject* response) {
    return FEventsWriteEventsResponse{};
}

UPlayFabEventsModelDecoder::UPlayFabEventsModelDecoder() {
}

