#pragma once
#include "CoreMinimal.h"
#include "InsightsInsightsGetPendingOperationsResponse.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "InsightsInsightsOperationResponse.h"
#include "InsightsInsightsGetDetailsResponse.h"
#include "InsightsInsightsGetOperationStatusResponse.h"
#include "InsightsInsightsGetLimitsResponse.h"
#include "PlayFabInsightsModelDecoder.generated.h"

class UPlayFabJsonObject;

UCLASS(Blueprintable)
class PLAYFAB_API UPlayFabInsightsModelDecoder : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPlayFabInsightsModelDecoder();
    UFUNCTION(BlueprintCallable)
    static FInsightsInsightsOperationResponse decodeInsightsOperationResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FInsightsInsightsGetPendingOperationsResponse decodeInsightsGetPendingOperationsResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FInsightsInsightsGetOperationStatusResponse decodeInsightsGetOperationStatusResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FInsightsInsightsGetLimitsResponse decodeInsightsGetLimitsResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FInsightsInsightsGetDetailsResponse decodeInsightsGetDetailsResponseResponse(UPlayFabJsonObject* response);
    
};

