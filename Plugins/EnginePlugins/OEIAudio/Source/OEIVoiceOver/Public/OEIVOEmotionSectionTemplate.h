#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "OEIVOEmotionSectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FOEIVOEmotionSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    OEIVOICEOVER_API FOEIVOEmotionSectionTemplate();
};

