#pragma once
#include "CoreMinimal.h"
#include "QuadAudioBedSoundData.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct MAINE_API FQuadAudioBedSoundData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundBase* FrontLeftSound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundBase* FrontRightSound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundBase* BackLeftSound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundBase* BackRightSound;
    
    FQuadAudioBedSoundData();
};

