#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "HeatEmitterTraceResult.generated.h"

USTRUCT(BlueprintType)
struct FHeatEmitterTraceResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FTransform Transform;
    
    UPROPERTY(BlueprintReadOnly)
    float DistanceToOwner;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float EmissionMaxRadius;
    
    UPROPERTY(BlueprintReadOnly)
    float EmissionMaxStrength;
    
    UPROPERTY(BlueprintReadOnly)
    float EmissionStrengthAtOwnerLocation;
    
    UPROPERTY(BlueprintReadOnly)
    float EmitterDamageMultiplier;
    
    MAINE_API FHeatEmitterTraceResult();
};

