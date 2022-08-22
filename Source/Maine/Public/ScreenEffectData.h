#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "EScreenEffectType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RuntimeFloatCurve -FallbackName=RuntimeFloatCurve
#include "ScreenEffectData.generated.h"

class UMaterialParameterCollection;
class UObject;

UCLASS()
class MAINE_API UScreenEffectData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UMaterialParameterCollection* MaterialParameterCollection;
    
    UPROPERTY(EditAnywhere)
    UObject* PostProcessMaterial;
    
    UPROPERTY(EditAnywhere)
    EScreenEffectType DisplayType;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve IntensityCurve;
    
    UPROPERTY(EditAnywhere)
    float MaterialParameterIntensityScalar;
    
    UPROPERTY(EditAnywhere)
    float ChromaticAberrationIntensityScalar;
    
    UScreenEffectData();
};

