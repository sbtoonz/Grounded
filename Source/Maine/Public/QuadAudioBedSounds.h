#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "QuadAudioBedSoundData.h"
#include "QuadAudioBedSounds.generated.h"

UCLASS(BlueprintType)
class MAINE_API UQuadAudioBedSounds : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FQuadAudioBedSoundData DaySounds;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FQuadAudioBedSoundData NightSounds;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FQuadAudioBedSoundData SubmergedSounds;
    
    UQuadAudioBedSounds();
};

