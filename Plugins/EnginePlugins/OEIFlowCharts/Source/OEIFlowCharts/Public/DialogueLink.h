#pragma once
#include "CoreMinimal.h"
#include "FlowChartLink.h"
#include "EQuestionNodeDisplayType.h"
#include "DialogueLink.generated.h"

USTRUCT(BlueprintType)
struct FDialogueLink : public FFlowChartLink {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RandomWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayQuestionNodeVO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuestionNodeDisplayType QuestionNodeTextDisplay;
    
public:
    OEIFLOWCHARTS_API FDialogueLink();
};

