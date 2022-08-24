#pragma once
#include "CoreMinimal.h"
#include "TimelapseAudioCue.generated.h"

class USoundCue;

USTRUCT(BlueprintType)
struct FTimelapseAudioCue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* Cue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndTime;
    
    MAINE_API FTimelapseAudioCue();
};

