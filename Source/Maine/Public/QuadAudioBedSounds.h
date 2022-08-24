#pragma once
#include "CoreMinimal.h"
#include "QuadAudioBedSoundData.h"
#include "Engine/DataAsset.h"
#include "QuadAudioBedSounds.generated.h"

UCLASS(Blueprintable)
class MAINE_API UQuadAudioBedSounds : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuadAudioBedSoundData DaySounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuadAudioBedSoundData NightSounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuadAudioBedSoundData SubmergedSounds;
    
    UQuadAudioBedSounds();
};

