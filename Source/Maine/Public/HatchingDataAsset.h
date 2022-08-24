#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EggHatchType.h"
#include "HatchingDataAsset.generated.h"

class UVisualEffect;
class USoundCue;

UCLASS(Blueprintable)
class MAINE_API UHatchingDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEggHatchType> HatchOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVisualEffect* HatchVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* HatchAudio;
    
    UHatchingDataAsset();
};

