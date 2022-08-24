#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EScreenEffectType.h"
#include "Curves/CurveFloat.h"
#include "ScreenEffectData.generated.h"

class UMaterialParameterCollection;
class UObject;

UCLASS(Blueprintable)
class MAINE_API UScreenEffectData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* MaterialParameterCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* PostProcessMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EScreenEffectType DisplayType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve IntensityCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaterialParameterIntensityScalar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChromaticAberrationIntensityScalar;
    
    UScreenEffectData();
};

