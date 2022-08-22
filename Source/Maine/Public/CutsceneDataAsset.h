#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "ECutsceneTargetType.h"
#include "CutsceneDataAsset.generated.h"

UCLASS()
class MAINE_API UCutsceneDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FSoftObjectPath LevelSequencePath;
    
    UPROPERTY(EditDefaultsOnly)
    ECutsceneTargetType TargetType;
    
    UPROPERTY(EditDefaultsOnly)
    bool bProvideInitialFOV;
    
    UPROPERTY(EditDefaultsOnly)
    float InitialFOV;
    
    UCutsceneDataAsset();
};

