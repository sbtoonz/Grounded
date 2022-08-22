#pragma once
#include "CoreMinimal.h"
#include "TimelapseAudioCue.generated.h"

class USoundCue;

USTRUCT(BlueprintType)
struct FTimelapseAudioCue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundCue* Cue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float StartTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float EndTime;
    
    MAINE_API FTimelapseAudioCue();
};

