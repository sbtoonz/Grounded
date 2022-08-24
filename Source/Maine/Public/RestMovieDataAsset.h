#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ConversationReference.h"
#include "GlobalVariableReferenceConditional.h"
#include "GlobalVariableReference.h"
#include "RestMovieDataAsset.generated.h"

class UFileMediaSource;

UCLASS(Blueprintable)
class MAINE_API URestMovieDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFileMediaSource* RestMovie;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConversationReference Conversation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGlobalVariableReferenceConditional GlobalVariableConditional;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGlobalVariableReference GlobalVariable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NewGlobalValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGlobalVariableReference IncrementGlobalVariable;
    
    URestMovieDataAsset();
};

