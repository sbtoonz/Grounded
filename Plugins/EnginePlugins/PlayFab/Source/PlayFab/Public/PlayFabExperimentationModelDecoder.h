#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ExperimentationGetExclusionGroupTrafficResult.h"
#include "ExperimentationGetTreatmentAssignmentResult.h"
#include "ExperimentationGetLatestScorecardResult.h"
#include "ExperimentationGetExperimentsResult.h"
#include "ExperimentationGetExclusionGroupsResult.h"
#include "ExperimentationEmptyResponse.h"
#include "ExperimentationCreateExperimentResult.h"
#include "ExperimentationCreateExclusionGroupResult.h"
#include "PlayFabExperimentationModelDecoder.generated.h"

class UPlayFabJsonObject;

UCLASS(Blueprintable)
class PLAYFAB_API UPlayFabExperimentationModelDecoder : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPlayFabExperimentationModelDecoder();
    UFUNCTION(BlueprintCallable)
    static FExperimentationGetTreatmentAssignmentResult decodeGetTreatmentAssignmentResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FExperimentationGetLatestScorecardResult decodeGetLatestScorecardResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FExperimentationGetExperimentsResult decodeGetExperimentsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FExperimentationGetExclusionGroupTrafficResult decodeGetExclusionGroupTrafficResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FExperimentationGetExclusionGroupsResult decodeGetExclusionGroupsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FExperimentationEmptyResponse decodeEmptyResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FExperimentationCreateExperimentResult decodeCreateExperimentResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FExperimentationCreateExclusionGroupResult decodeCreateExclusionGroupResultResponse(UPlayFabJsonObject* response);
    
};

