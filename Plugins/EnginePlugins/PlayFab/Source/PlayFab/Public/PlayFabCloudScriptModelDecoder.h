#pragma once
#include "CoreMinimal.h"
#include "CloudScriptListQueuedFunctionsResult.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CloudScriptListFunctionsResult.h"
#include "CloudScriptListHttpFunctionsResult.h"
#include "CloudScriptExecuteFunctionResult.h"
#include "CloudScriptEmptyResult.h"
#include "CloudScriptExecuteCloudScriptResult.h"
#include "PlayFabCloudScriptModelDecoder.generated.h"

class UPlayFabJsonObject;

UCLASS(Blueprintable)
class PLAYFAB_API UPlayFabCloudScriptModelDecoder : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPlayFabCloudScriptModelDecoder();
    UFUNCTION(BlueprintCallable)
    static FCloudScriptListQueuedFunctionsResult decodeListQueuedFunctionsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FCloudScriptListHttpFunctionsResult decodeListHttpFunctionsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FCloudScriptListFunctionsResult decodeListFunctionsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FCloudScriptExecuteFunctionResult decodeExecuteFunctionResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FCloudScriptExecuteCloudScriptResult decodeExecuteCloudScriptResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FCloudScriptEmptyResult decodeEmptyResultResponse(UPlayFabJsonObject* response);
    
};

