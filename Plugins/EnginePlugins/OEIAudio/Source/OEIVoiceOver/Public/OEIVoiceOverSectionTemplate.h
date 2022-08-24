#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "OEIVoiceOverSectionTemplate.generated.h"

class UOEIVoiceOverSection;

USTRUCT(BlueprintType)
struct FOEIVoiceOverSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UOEIVoiceOverSection* Section;
    
    OEIVOICEOVER_API FOEIVoiceOverSectionTemplate();
};

