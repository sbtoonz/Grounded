#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "EggHatchType.h"
#include "HatchingDataAsset.generated.h"

class UVisualEffect;
class USoundCue;

UCLASS()
class MAINE_API UHatchingDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FEggHatchType> HatchOptions;
    
    UPROPERTY(EditDefaultsOnly)
    UVisualEffect* HatchVFX;
    
    UPROPERTY(EditDefaultsOnly)
    USoundCue* HatchAudio;
    
    UHatchingDataAsset();
};

