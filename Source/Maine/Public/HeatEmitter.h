#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RuntimeFloatCurve -FallbackName=RuntimeFloatCurve
#include "HeatEmitter.generated.h"

class UStaticMesh;
class USkeletalMesh;

USTRUCT(BlueprintType)
struct FHeatEmitter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UStaticMesh* StaticMesh;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USkeletalMesh* SkeletalMesh;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool UseActorForwardScaling;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FOVAngleBeforeFallOff;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float EmissionMaxRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRuntimeFloatCurve DistanceFallOffCurve;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float EmissionMaxStrength;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float EmitterDamageMultiplier;
    
    MAINE_API FHeatEmitter();
};

