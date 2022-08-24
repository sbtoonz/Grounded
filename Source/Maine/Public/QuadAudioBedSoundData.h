#pragma once
#include "CoreMinimal.h"
#include "QuadAudioBedSoundData.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct MAINE_API FQuadAudioBedSoundData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* FrontLeftSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* FrontRightSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* BackLeftSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* BackRightSound;
    
    FQuadAudioBedSoundData();
};

