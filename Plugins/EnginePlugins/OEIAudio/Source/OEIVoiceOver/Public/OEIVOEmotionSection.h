#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "OEIVOEmotionSectionParams.h"
#include "OEIVOEmotionSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UOEIVOEmotionSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOEIVOEmotionSectionParams Params;
    
    UOEIVOEmotionSection();
};

