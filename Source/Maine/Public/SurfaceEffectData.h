#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "SurfaceEffect.h"
#include "SurfaceEffectData.generated.h"

UCLASS()
class MAINE_API USurfaceEffectData : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FSurfaceEffect DefaultEffect;
    
    UPROPERTY(EditAnywhere)
    TArray<FSurfaceEffect> OverrideEffects;
    
public:
    USurfaceEffectData();
};

