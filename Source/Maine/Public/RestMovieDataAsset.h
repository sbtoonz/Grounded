#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIFlowCharts -ObjectName=ConversationReference -FallbackName=ConversationReference
#include "GlobalVariableReferenceConditional.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIGlobalVariables -ObjectName=GlobalVariableReference -FallbackName=GlobalVariableReference
#include "RestMovieDataAsset.generated.h"

class UFileMediaSource;

UCLASS(BlueprintType)
class MAINE_API URestMovieDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UFileMediaSource* RestMovie;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FConversationReference Conversation;
    
    UPROPERTY(EditAnywhere)
    FGlobalVariableReferenceConditional GlobalVariableConditional;
    
    UPROPERTY(EditAnywhere)
    FGlobalVariableReference GlobalVariable;
    
    UPROPERTY(EditAnywhere)
    int32 NewGlobalValue;
    
    UPROPERTY(EditAnywhere)
    FGlobalVariableReference IncrementGlobalVariable;
    
    URestMovieDataAsset();
};

