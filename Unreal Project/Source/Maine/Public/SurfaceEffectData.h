#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
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

