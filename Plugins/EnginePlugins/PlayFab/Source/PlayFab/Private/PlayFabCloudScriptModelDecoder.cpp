#include "PlayFabCloudScriptModelDecoder.h"

class UPlayFabJsonObject;

FCloudScriptListQueuedFunctionsResult UPlayFabCloudScriptModelDecoder::decodeListQueuedFunctionsResultResponse(UPlayFabJsonObject* response) {
    return FCloudScriptListQueuedFunctionsResult{};
}

FCloudScriptListHttpFunctionsResult UPlayFabCloudScriptModelDecoder::decodeListHttpFunctionsResultResponse(UPlayFabJsonObject* response) {
    return FCloudScriptListHttpFunctionsResult{};
}

FCloudScriptListFunctionsResult UPlayFabCloudScriptModelDecoder::decodeListFunctionsResultResponse(UPlayFabJsonObject* response) {
    return FCloudScriptListFunctionsResult{};
}

FCloudScriptExecuteFunctionResult UPlayFabCloudScriptModelDecoder::decodeExecuteFunctionResultResponse(UPlayFabJsonObject* response) {
    return FCloudScriptExecuteFunctionResult{};
}

FCloudScriptExecuteCloudScriptResult UPlayFabCloudScriptModelDecoder::decodeExecuteCloudScriptResultResponse(UPlayFabJsonObject* response) {
    return FCloudScriptExecuteCloudScriptResult{};
}

FCloudScriptEmptyResult UPlayFabCloudScriptModelDecoder::decodeEmptyResultResponse(UPlayFabJsonObject* response) {
    return FCloudScriptEmptyResult{};
}

UPlayFabCloudScriptModelDecoder::UPlayFabCloudScriptModelDecoder() {
}

